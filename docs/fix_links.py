# workarounds to avoid changing current directory structure
# autolink logic based on https://github.com/zopieux/py-gfm/blob/fd7b33ed138d240d24dfb659acff7d4ce3f43745/gfm/autolink.py

import json
import sys
import re

URL_RE = re.compile(
    r"(```(?s:.)+?```|`.+?`)|"
    r"\b((?:(?i:ftp|https?)://|(?i:www)\d{0,3}[.])(?:[^\s()<>]+|"
    r"\(([^\s()<>]+|(\([^\s()<>]+\)))*\))+(?:\(([^\s()<>]+|(\([^\s()"
    r"<>]+\)))*\)|[^\s`!()\[\]{};:" + r"'" + r'".,<>?«»“”‘’*]))'
)
PROTOCOL_RE = re.compile(r"^(?i:ftp|https?)://")

def handle_match(m):
    code = m.group(1)
    if code:
        return code
    href = m.group(2)
    if not PROTOCOL_RE.match(href):
        href = "http://%s" % href
    return f'<{href}>'

def proc_items(items):
    for item in items:
        if 'Chapter' in item:
            s = item['Chapter']['content']
            s = s.replace('](README.md)', '](./)')
            s = s.replace('](/INSTALL.md', '](INSTALL.md')
            s = s.replace('](docs/', '](')
            item['Chapter']['content'] = URL_RE.sub(handle_match, s)
            proc_items(item['Chapter']['sub_items'])

if __name__ == '__main__':
    if len(sys.argv) > 1:
        if sys.argv[1] == "supports":
            sys.exit(0)

    context, book = json.load(sys.stdin)
    proc_items(book['sections'])

    print(json.dumps(book))
