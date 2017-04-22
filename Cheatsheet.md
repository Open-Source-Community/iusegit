# Cheatsheet for everyday life with git
This sheet assumes you have basic knowledge of git. It merely serves as a refresher. 

## Clone or initialize a new git repo
* `git clone <url>` clones an existing repo from given url.
* `git init` creates a new repo in the current directory

## Basic workflow (add, commit, pull and push)
These are 85% of the commands you'll use
* you make changes
* `git add .` to add everything
* `git commit -m "<insert meaningful commit message here>"` to commit your changes
* `git pull` to get latest changes
* `git push` to push your changes

**Note:** The first time you push type `git push origin master -u` the `-u` tells git that `origin` and `master` are the default remote and branch respectively.

* `git push <remote name> <branch name>` To push to a certain remote and branch. Usually `git push origin master`.
* `git pull <remote name> <branch name>` Same as above except that it's pulling this time. Usually `git pull origin master`.

## Branches
* `git branch` lists available branches
* `git branch <branch name>` creates a new branch
* `git checkout <branch name>` moves to the specified branch
* `git checkout -b <branch name>` creates a new branch and moves to it (it's a shortcut for the previous two commands)
* `git merge <branch name>` merges <branch name> with current branch
* `git branch -d <branch name>` deletes branch if already merged to master
* `git branch -D <branch name>` deltes branch by force even if not merged to master

## Remotes
Your local repo can be connected to multiple remote repositories at once. Example: github, bitbucket and the local staging server in company. If you're connected to more than one remote this will probably help you.
* `git remote -v` lists the remote names and urls
* `git remote add <remote name> <url>` Adds a new remote
* `git remote set-url <remote name> <new url>` Changes remote url
* `git remote rm <remote name>` Removes remote

## Undoing Changes
Use these to when you mess things up and want to revert back to a previous commit. Be careful **Try you best not to change history** unless absolutely necessary. Checkout the beautiful [Atlasian documentation](https://www.atlassian.com/git/tutorials/undoing-changes) for more details.
* `git revert <commit id>` Produces a new commit that undoes everything that was done in the provided commit. It's a safe way to undo changes without changing commit history.
* `git reset --hard` removes all the changes you made and reverts you back to the last commit. You cannot undo this.
* `git reset --hard <commit id>` removes all the changes you made and reverts you back to the commit you stated. **Do not do this unless absolutely necessary** This will cause you so much pain if you're working with a team.
* `git reset <commit id>` This is called a soft reset. Do it to revert back to a certain commit but keeping the changes unstaged (ready to be added and committed).

## Other useful stuff
* `git fetch` fetches all remote changes, tags and branches without merging with the current branch.
I usually use this to grab all remote branches and then merge one of them to master.

**If you have suggestions, please feel free to pull request. Bear in mind that this sheet is made to be kept simple. Please do not include fancy stuff that are not used by basic users.**
