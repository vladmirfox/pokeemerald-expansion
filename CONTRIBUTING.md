<!-- omit in toc -->
# Contributing to pokeemerald-expansion

First off, thanks for helping improve `pokeemerald-expansion`! ❤️

All contributions are encouraged and valued. Please make sure to read the relevant section before making your contribution! It will make it a lot easier for you and the maintainers. We're excited to see your contributions. 🎉

<!-- omit in toc -->
## Table of Contents

  - [I Want To Contribute](#i-want-to-contribute)
  - [Reporting Bugs](#reporting-bugs)
  - [Suggesting Enhancements](#suggesting-enhancements)
  - [Your First Code Contribution](#your-first-code-contribution)
  - [Improving The Documentation](#improving-the-documentation)
- [Styleguides](#styleguides)
  - [Commit Messages](#commit-messages)
- [Join The Project Team](#join-the-project-team)

> ## Legal Notice <!-- omit in toc -->
> When contributing to this project, you must agree that you have authored 100% of the content, that you have the necessary rights to the content and that the content you contribute may be provided under the [project licence](<https://github.com/rh-hideout/pokeemerald-expansion?tab=MIT-1-ov-file#readme>).

## Bug Reports

### What should I do before making a bug report?

- Does your bug occur on the latest unmodified (clean) version of the [`upcoming`](https://github.com/rh-hideout/pokeemerald-expansion/tree/upcoming) or [`master`](https://github.com/rh-hideout/pokeemerald-expansion/tree/master) branch? If not, the issue is most likely one introduced by your game.
- Has somebody else already found this issue? This is best done by searching the [bug tracker](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=label%3Abug) to see if anybody else reported it. If there is already an issue, replying to the issue with more information can help solve the problem.

### How do I submit a bug report?

We use [GitHub](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=sort%3Aupdated-desc+is%3Aissue+is%3Aopen+label%3Abug) issues to track bugs. If you run into an issue with the project, open an [Issue](https://github.com/rh-hideout/pokeemerald-expansion/issues/new). 

- The best bug reports have enough information that we won't have to contact you for more information. We welcome all efforts to improve pokeemerald-expansion, but would be very grateful if you completed as much of the checklist as possible in your bug report. This will help other contributiors fix your issue

#### Bug Report Checklist 
    [] Does your report explain the behavior you would expect me and the actual behavior?
    [] Does your report provide a video (preferred) or gif of the problem?
    [] Does your report provide as much context as possible and describe the *reproduction steps* that someone else can follow to recreate the issue on their own?

### What happens after I submit a bug report?

- The maintainers will label the issue accordingly.
- A maintainer will try to reproduce the issue with your provided steps.
    - If there are no reproduction steps or no obvious way to reproduce the issue, the team will ask you for those steps. Until the maintainers can reproduce a bug, the bug will retain the `bug:unconfirmed` label. Unconfirmed bugs are less likely to ever get fixed.
- If the team is able to reproduce the issue, it will be marked `bug:confirmed`, as well as possibly other tags, and the issue will be left to be [implemented by someone](#your-first-code-contribution).
    - If the issue is particularly game-breaking, a maintainer may add it to a future version's milestone, meaning that version will not be released until the problem is solved.

## Feature Requests

This section guides you through submitting a feature request for pokeemerald-expansion, **including completely new features and minor improvements to existing functionality**. Following these guidelines will help maintainers and the community to understand your suggestion and find related suggestions.

### Before Submitting a Feature Request

- Make sure your request is in [pokeemerald-expansion's scope](team_procedures/scope.md) - if it is not clear if something is in scope, you can start a discussion thread in the [#pr-discussions](https://discord.com/channels/419213663107416084/1102784418369785948) channel of the [the RHH Discord Server!](https://discord.gg/6CzjAG6GZk).

### What should I do before making a feature request?

- Read the [documentation](https://rh-hideout.github.io/pokeemerald-expansion/) find out if the functionality is already covered, maybe by an individual configuration.
- Perform a [search](https://github.com/rh-hideout/pokeemerald-expansion/issues) to see if the feature has already been requested. If it has, add a comment to the existing issue instead of opening a new one.

### How do I submit a feature request?

We use [GitHub](https://github.com/rh-hideout/pokeemerald-expansion) issues to track all [feature requests](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=sort%3Aupdated-desc%20is%3Aissue%20is%3Aopen%20label%3Afeature-request).

- Make sure the title of your feature request is clear and descriptive.
- Be as specific as possible in your request. 
    - What is the current behavior?
    - What behavior would you expect this feature to provide?
    - Can you provide an example image or video of the behavior you are requesting?
    - What other information can you provide to help your suggestion get implemented?
- Have other projects solved this problem? Are there examples to be provided?

### What happens after I submit a feature request?

- A maintainer will [label](https://github.com/rh-hideout/pokeemerald-expansion/labels) the issue.
- If the feature request is out of [scope](team_procedures/scope.md), it will be closed.
- if the request is in scope, any other contributor can volunteer to [fufill it via a pull request](#Pull-Requests). When the request is filled, the request will be closed.

## Pull Requests

### What should I do before starting a pull request?

- Make sure you have a basic understanding of `git` and have a [local copy](INSTALL.md) of `pokeemerald-expansion`.
- Make sure your contribution is in [scope](team_procedures/scope.md) - if it is not clear if something is in scope, you can start a discussion thread in the [#pr-discussions](https://discord.com/channels/419213663107416084/1102784418369785948) channel of the [the RHH Discord Server!](https://discord.gg/6CzjAG6GZk).
- Choose a branch to contribute your PR to:
    - **`master`**: Fixes for bugs that are currently present in the `master` branch.
    - **`upcoming`**: All other pull requests.
- Create a new branch from the most recent version of the branch you've chosen.
- If your contribution is particularly large or invasive, we reccomend getting a maintainer to agree to review it before you start on the work! We have a table that lists all [current maintainers and their areas of expertise](#maintainers).

### How do I submit a pull request?

Once your contributing is done, evaluate it against the PR checklist.

#### PR Checklist
[] Does the branch successfully compile?
[] Does the functionality work in game without any problems?
[] Does running `make check` result in no test marked as `FAILING`?
[] Does your branch test its new functionality? 
    - If your new functionality _can_ be tested, it is requried to have tests.
    - If you need help with tests, you can ask in the #expansion-tests channel of the Discord server.
[] Does the submitted code follow the [styleguide](#styleguide)?
[] Is the branch free from merge conflicts with the target branch?

Pull requests that do not meet the points on this checklist will not be merged.

If any of the above are not true, you can still submit the pull request, but [please mark it as draft](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/changing-the-stage-of-a-pull-request). 

Once your code is pushed to your repo on Github, open a pull request from your branch targeting the branch you've chosen from `pokeemerald-expansion`. Please fill out the pull request description as completely as possible. 

### What happens after I submit a pull request?

A maintainer will then assign themselves as a reviewer of your pull request, and may provide feedback in the form of a PR review. 

Contributors are responsible for responding to and updating their branch by addressing the feedback in the review. Contributors are also responsible for making sure the branch passes the [PR Checklist](#PR checklist) at all times.

#### Merge Checklist

Maintainers will measure the submitted pull request against another checklist.
[] Is the branch theoretical functionality in scope?
[] Does the branch successfully compile?
[] Does running `make check` result in no test marked as `FAILING`?
[] Does the functionality work in game without any problems?
[] Is the code as minimally invasive as possible?
    [] Is new functionality isolated to a single file?
[] If this branch changes a function that is expected to be modified by users, is there a migration script?
[] Should new functionality be gated behind a config?
    [] Does the branch meet our [config philosophy](#config-phiolosophy)?
[] Does the branch meet our [saves phiolosophy](#saves-philosophy)?
[] Are tests written for everything that can be tested?
[] Does the submitted code follow the [styleguide](#styleguide)?
[] Is the pull request appropriately labeled?
[] Is `pokeemerald-expansion` free from a merge freeze?

Once all items on the checklist are true, the branch will be merged in.

## Config Philosophy

If a branch can modifies saves, the functionality that does so must be gated behind a config, and off by default.

If a branch has a config that performs either of the following, it should be on by default:
*  improves the backend / developer quality of life
*  emulates present day, modern day Pokémon

If a branch's behavior is one that Game Freak does not have a consistent stance on, the default behavior of the config should be disussed by the maintainers.

All other configs should be off.

## Save Philosophy

Until [save migration](https://discord.com/channels/419213663107416084/1108733346864963746) is implemented, branches will only merged in if they do not forcefully break existing game saves. 

When `pokemeerald-expansion` gets to a point where new functionality will require that we break saves, we will merge as many [save-breaking features](https://discord.com/channels/419213663107416084/1202774957776441427) together as possible, and increment the major version number of the project.

## Styleguide

### Naming Conventions

Function names and struct names should be formatted in `PascalCase`.

```c
void ThisIsCorrect(void);

struct MyStruct
{
    u8 firstField;
    u16 secondField;
    ...
};
```

Variables and struct fields should be formatted in `camelCase`.

```c
int thisIsCorrect = 0;
```

Global variables should be prefixed with `g`, and static variables should be
prefixed with `s`.

```c
extern int gMyGlobalVariable;

static u8 sMyStaticVariable = 0;
```

Macros and constants should use `CAPS_WITH_UNDERSCORES`.

```c
#define MAX_LEVEL 100

enum
{
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
};

#define ADD_FIVE(x) ((x) + 5)
```

### Coding Style

#### Comments

Ideally, contributions have descriptive variable, function and constant names so as to explain functionality without comments. When a comment is used, the content of the comment dhould explain _WHY_ a specific system or component works the way it does.

When describing a system/component in-depth, use block comment syntax.

```c
/*
 * This is an in-depth description of the save block format. Its format is as follows:
 *
 * Sectors  0 - 13: Save Slot 1
 * Sectors 14 - 27: Save Slot 2
 * ...
 */
```

When briefly describing a function or block of code, use a single-line comments
placed on its own line. 
There should be a single space directly to the right of `//`.

```c
// This is supplemental information for the function. If there is a bunch of info, it should
// carry on to the next line.
void ProcessSingleTask(void)
{
   // Short comment describing some noteworthy aspect of the code immediately following.
   ...
   // Comments should be capitalized and end in a period.
}
```

When tagging a data structure that corresponds to an `enum` or some noteworthy
value, place the comment on the same line as the code.
```c
const u8 gPlantlikeMons[] =
{
    FALSE, // SPECIES_BULBASAUR
    FALSE, // SPECIES_IVYSAUR
    TRUE,  // SPECIES_VENUSAUR
    FALSE, // SPECIES_CHARMANDER
    ...
};
```

#### Whitespace

All `.c` and `.h` files should use 4 spaces--not tabs.
Assembler files (`.s)` use tabs.
Script files (`.inc)` use tabs.

#### Operators

Assignments and comparison operators should have one space on both sides of `=`.

```c
int i = 0; // correct
int i=0;   // incorrect

a > b // correct
a>b   // incorrect
```

The incrementor and decrementor operators should NOT have a space.

```c
i++;  // correct
i ++; // incorrect
```

A control statement should have a space between them and their expressions, and the opening bracket should be on the next line.

```c
for (...)
{
    // correct
}

for(...) {
    // incorrect
}
```

A `switch` statement's cases should left-align with the `switch`'s block.

```c
switch (foo)
{
case 0: // correct
    ...
    break;
}

switch (foo)
{
    case 0: // incorrect
        ...
        break;
}
```

A single empty line should follow a block.

```c
int MyFunction(int bar)
{
    int foo = 0;
    if (bar)
        foo++;

    return foo; // incorrect
}

int MyFunction(int bar)
{
    int foo = 0;
    if (bar)
        foo++;
    return foo; // incorrect
}
```

A chain of `if-else` statements in which any block is more than one line of
code should use braces. If all blocks are single-line, then no braces are necessary.

```c
if (foo) // correct
{
    return 1;
}
else
{
    MyFunction();
    return 0;
}

if (foo) // incorrect
    return 1;
else
{
    MyFunction();
    return 0;
}
```

#### Control Structures

When comparing whether or not a value equals `0`, don't be explicit unless the
situation calls for it.

```c
if (runTasks) // correct
    RunTasks();

if (runTasks != 0) // incorrect
    RunTasks();
    
if (!PlayerIsOutside()) // correct
    RemoveSunglasses();

if (PlayerIsOutside() == 0) // incorrect
    RemoveSunglasses();
```
End all `switch` cases with `break`, unless omitting `break` is necessary for
matching the original program flow.
```c
void MyFunction(void)
{
    switch (color)
    {
    ...
    case RED:
        ...
        break; // correct
    }

    return;
}

void MyFunction(void)
{
    switch (color)
    {
    ...
    case RED:
        ... // incorrect
    }

    return;
}
```

When writing a `for` or `while` loop with no body, use a semicolon `;` on the
same line, rather than empty braces.

```c
for (i = 0; gParty[i].species != SPECIES_NONE; i++); // correct

for (i = 0; gParty[i].species != SPECIES_NONE; i++) // incorrect
{ }
```
#### Inline Configs

When adding functionality that is controlled by a config, defines should be checked within the normal control flow of the function unless a data structure requires a change at runtime.
```c
void SetCurrentDifficultyLevel(enum DifficultyLevel desiredDifficulty)
{
#ifdef B_VAR_DIFFICULTY
    return; // Incorrect
#endif

    if (desiredDifficulty > DIFFICULTY_MAX)
        desiredDifficulty = DIFFICULTY_MAX;

    VarSet(B_VAR_DIFFICULTY, desiredDifficulty);
}
```
```c
void SetCurrentDifficultyLevel(enum DifficultyLevel desiredDifficulty)
{
    if (!B_VAR_DIFFICULTY) // Correct
        return;

    if (desiredDifficulty > DIFFICULTY_MAX)
        desiredDifficulty = DIFFICULTY_MAX;

    VarSet(B_VAR_DIFFICULTY, desiredDifficulty);
}
```
```c
    [MOVE_VINE_WHIP] =
    {
        .name = COMPOUND_STRING("Vine Whip"),
        .description = COMPOUND_STRING(
            "Strikes the foe with\n"
            "slender, whiplike vines."),
        #if B_UPDATED_MOVE_DATA >= GEN_6 // Correct
            .pp = 25,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 15,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 45 : 35,
    },
```
### Data Type Sizes
When a variable number is used, the data type should generally `u32`. There are a few exceptions to this rule, such as:
* Values stored in the saveblock should use the smallest data type possible.
* `EWRAM` variables should use the smallest data type possible.

### Constants, Enums and Type Checking
Avoid using magic numbers when possible - constants help to make clear why a specific value is used.

When several numbers in sequence are used AND those values are not utilized in the saveblock, an enum is used instead.

When an enum is used, the enum type is used instead of a regular number type to prevent incorrectly set values.

```
```
### Minimally Invasive

New functionality must be as minimally invasive to existing files as possible. When a large amount of new code is introduced, it is best to isolate it in its own file.

The [`B_VAR_DIFFICULTY`](https://patch-diff.githubusercontent.com/raw/rh-hideout/pokeemerald-expansion/pull/5337.diff) pull request is a good example of lots of new code being introduced in minimally invasive ways.

### `UNUSED`

If a function or data is introduced but is never called, it is designated as `UNUSED`.

```c
static void UNUSED PadString(const u8 *src, u8 *dst)
{
    u32 i;

    for (i = 0; i < 17 && src[i] != EOS; i++)
        dst[i] = src[i];

    for (; i < 17; i++)
        dst[i] = CHAR_SPACE;

    dst[i] = EOS;
}
```
## Maintainers

| Name | Discord | Github | Activity | Areas of Expertise |
| --- | --- | --- | --- | --- |
| Alex | rainonline | @AlexOn1ine | Active | Battles
| AsparagusEduardo | asparaguseduardo | @AsparagusEduardo | Active | All
| Egg | egg9255 | @DizzyEggg | Active | All
| ghoulslash | ghoulslash | @ghoulslash | Active | All, Dexnav, Metatile Behaviors
| Jasper | bassoonian | @Bassoonian | Active | All
| MGriffin | mgriffin | @mrgriffin | Active | Tests
| psf | pkmnsnfrn | @pkmnsnfrn | Active | Rematches, Difficulty, Trainer Slides
| Hedara | .hedara | @hedara90 | Active | Compression, Sprites
| Pawkkie | pawkkie | @Pawkkie | Active | Battle AI
| SBird | karathan | @SBird1337 | Active | Multichoice
| Agustin | agustingdlv | @AgustinGDLV | Inactive | Gimmicks
| tertu | tertu | @tertu-m | Inactive | Randomizer

## Attribution
This guide is based on the [contributing.md](https://contributing.md/generator)!

# TODO
- Get sign off on MIT license
