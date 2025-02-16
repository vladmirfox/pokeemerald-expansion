<!-- omit in toc -->
# Contributing to pokeemerald-expansion

First off, thanks for taking the time to contribute! ❤️

All types of contributions are encouraged and valued. See the [Table of Contents](#table-of-contents) for different ways to help and details about how this project handles them. Please make sure to read the relevant section before making your contribution. It will make it a lot easier for us maintainers and smooth out the experience for all involved. The community looks forward to your contributions. 🎉

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


## I Want To Contribute

> ### Legal Notice <!-- omit in toc -->
> When contributing to this project, you must agree that you have authored 100% of the content, that you have the necessary rights to the content and that the content you contribute may be provided under the [project licence](<https://github.com/rh-hideout/pokeemerald-expansion?tab=MIT-1-ov-file#readme>).

### Bug Reports

#### What should I do before making a bug report?
- Does your bug occur on the latest unmodified (clean) version of the `upcoming` or `master` branch? If not, the issue is most likely one introduced by your game.
- Has somebody else already found this issue? This is best done by searching the [bug tracker](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=label%3Abug) to see if anybody else reported it. If there is already an issue, replying to the issue with more information can help solve the problem.

#### How do I submit a bug report?

We use GitHub issues to track bugs and errors. If you run into an issue with the project, open an [Issue](https://github.com/rh-hideout/pokeemerald-expansion/issues/new). 

- The best bug reports have enough information that we won't have to contact you for more information. We welcome all efforts to improve pokeemerald-expansion, but would be very grateful if you did answered the following in your bug report. Doing this will help us fix any potential bug as fast as possible!
    - Explain the behavior you would expect and the actual behavior.
    - What did you expect to happen instead?
    - Are you able to provide a video (preferred) or gif of the problem?
    - Please provide as much context as possible and describe the *reproduction steps* that someone else can follow to recreate the issue on their own. 

#### What happens after I submit a bug report?

- The maintainers will label the issue accordingly.
- A maintainer will try to reproduce the issue with your provided steps.
    - If there are no reproduction steps or no obvious way to reproduce the issue, the team will ask you for those steps. Until the maintainers can reproduce a bug, the bug will retain the `bug:unconfirmed` label. Unconfirmed bugs are less likely to ever get fixed.
- If the team is able to reproduce the issue, it will be marked `bug:confirmed`, as well as possibly other tags, and the issue will be left to be [implemented by someone](#your-first-code-contribution).
    - If the issue is particularly game-breaking, a maintainer may add it to a future version's milestone, meaning that version will not be released until the problem is solved.

### Feature Requests

This section guides you through submitting a feature request for pokeemerald-expansion, **including completely new features and minor improvements to existing functionality**. Following these guidelines will help maintainers and the community to understand your suggestion and find related suggestions.

#### Before Submitting a Feature Request

- Make sure your request is in [pokeemerald-expansion's scope](team_procedures/scope.md) - if it is not clear if something is in scope, you can start a discussion thread in the #pr-discussions channel of the [the RHH Discord Server!](https://discord.gg/6CzjAG6GZk).

#### What should I do before making a feature request?
- Read the [documentation](https://rh-hideout.github.io/pokeemerald-expansion/) find out if the functionality is already covered, maybe by an individual configuration.
- Perform a [search](https://github.com/rh-hideout/pokeemerald-expansion/issues) to see if the feature has already been requested. If it has, add a comment to the existing issue instead of opening a new one.

#### How do I submit a feature request?

We use GitHub issues to track all [feature requests](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=sort%3Aupdated-desc%20is%3Aissue%20is%3Aopen%20label%3Afeature-request).

- Make sure the title of your feature request is clear and descriptive.
- Be as specific as possible in your request. 
    - What is the current behavior?
    - What behavior would you expect this feature to provide?
    - Can you provide an example image or video of the behavior you are requesting?
    - What other information can you provide to help your suggestion get implemented?
- Have other projects solved this problem? Are there examples to be provided?

#### What happens after I submit a feature request?

- The maintainers will label the issue accordingly.
- If the feature request is out of scope, it will be closed.
- if the request is in scope, any other contributor can volunteer to [fufill it via a pull request](#your-first-code-contribution). When the request is filled, the request will be closed.

### How do I submit a pull request?

#### What should I do before starting a pull request?

- Make sure you have a basic understanding of `git` and have a [local copy](INSTALL.md) of `pokeemerald-expansion`.
- Make sure your contribution is in [pokeemerald-expansion's scope](team_procedures/scope.md) - if it is not clear if something is in scope, you can start a discussion thread in the #pr-discussions channel of the [the RHH Discord Server!](https://discord.gg/6CzjAG6GZk).
- Choose a branch to contribute you PR to:
    - **`master`**: Fixes for bugs that are currently present in the `master` branch.
    - **`upcoming`**: All other pull requests.
- Create a new branch from the most recent version of the branch you've chosen.
- If your feature is particularly large or invasive, we reccomend getting a maintainer to agree to review it before you start on the work! We have a table that lists all [current maintainers and their areas of expertise](#maintainers).

#### How do I submit a pull request?

Once your feature is done, evaluate it against the PR checklist.

#### PR Checklist
[] Does the branch successfully compile?
[] Does the feature work in game without any problems?
[] Does running `make check` result in all tests passing?
[] Does your feature have tests? 
    - If your feature _can_ be tested, it is requried to have tests.
    - If you need help with tests, you can ask in the #expansion-tests channel of the Discord server.
[] Does the submitted code follow the [styleguide](#styleguide)?
[] Is the branch free from merge conflicts with the target branch?

If any of the above are not true, you can still submit the pull request, but [please mark it as draft](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/changing-the-stage-of-a-pull-request). 
Pull requests that do not meet the points on this checklist will not be merged.

#### What happens after I submit a pull request?

Once your code is pushed to your repo on Github, open a pull request from your branch to the branch you've chosen from `pokeemerald-expansion`. Please fill out the pull request description as completely as possible. 

A maintainer will then assign themselves as a reviewer of your pull request, and may provide feedback in the form of a PR review. 

Contributors are responsible for responding to and updating their branch by addressing the feedback in the review. Contributors are also responsible for making sure the branch passes the [PR Checklist](#PR checklist) at all times.

#### Merge Checklist
Maintainers will measure the submitted pull request against another checklist.
[] Is the theoretical functionality in scope?
[] Does the branch successfully compile?
[] Are all of the CI's tests passing?
[] Does the feature work in game without any problems?
[] Is the code as minimally invasive as possible?
    [] Is new functionality isolated to a single file?
[] If this feature changes a function that is expected to be modified by users, is there a migration script?
[] Should new functionality be gated behind a config?
    [] Does the branch meet our config philosophy?
[] Does the branch meet our saves phiolosophy?
[] Are tests written for everything that can be tested?
[] Does the submitted code follow the [styleguide](#styleguide)?
[] Is the pull request appropriately labeled?
[] Is `pokeemerald-expansion` free from a merge freeze?

Once all items on the checklist are true, the feature will be merged in.

## Config Philosophy
If a feature can modifies saves, the functionality that does so must be gated behind a config, and off by default.

If a feature has a config that performs either of the following, it should be on by default:
*  improves the backend / developer quality of life
*  emulates present day, modern day Pokémon

If a branch's behavior is one that Game Freak does not have a consistent stance on, the default behavior of the config should be disussed by the Senate.

All other configs should be off.

## Save Philosophy
Until [save migration](https://discord.com/channels/419213663107416084/1108733346864963746) is implemented, branches will only merged in if they do not forcefully break existing game saves. When `pokemeerald-expansion` gets to a point where a new feature will require that we break saves, we will merge as many [save-breaking features](https://discord.com/channels/419213663107416084/1202774957776441427) together as possible, and increment the major version number of the project.

## Styleguide

- braces on seperate line
- camelcase
- capital macros and defines
- new code should be as minially invasive to the rest of the codebase as possible
- variable and function names should be as descriptive as possible
- comments are not required, but when included should explain WHY something works a certain way, not HOW - the how should be evident from your code
- static for functions that are only used in one place
- UNUSED functions for stuff that is created but not called

## Maintainers

| Name | Discord | Github | Current Activity | Areas of Expertise |
| --- | --- | --- | --- | --- |
| 

## Attribution
This guide is based on the [contributing.md](https://contributing.md/generator)!

# TODO
- Get sign off on MIT license
- Finish maintainer table
