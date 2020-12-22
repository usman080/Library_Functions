# Standard Issue Labels

A Set of Standardized Labels for GitHub Issues

## Purpose

The idea behind these labels is to make it easy to find things that are actually important to us. Bugs and regressions take high priorities. Only certain people are qualified to review features and documentation. Cleanup stuff is important but not high priority usually. We also want to know who/what any given ticket is blocking on.

## Suggested Labels

- Issue Types
  - **Bug** - Anything that is broken
  - **Feature** - Anything that involves API changes, should generally only be for PRs or bug reports on in-progress features.
  - **Performance** - A performance related issue. We could track this as a bug, but usually these would have slightly lower priority than standard bugs.
  - **Cleanup** - Not a bug, not a feature, just code cleanup.
  - **Documentation** - Self-explanatory.
- Blockers
  - **Needs Bug Verification** - A bug report, needs verification that it's actually a bug.
  - **Needs Reproduction** - Needs a test case or other reproduction of the issue.
  - **Has Reproduction** - Indicates a test case exists and is up-to-date.
  - **Needs Code Review** -  The code to be verified by someone.
  - **Needs Submitter Response** - Anything that is blocking on the submitter.
  - **Needs Team Discussion** - Cannot progress until the core team has discussed further.