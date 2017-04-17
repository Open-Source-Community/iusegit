# Cheatsheet for everyday life with git
This sheet assumes you have basic knowledge of git. It merely serves as a refresher. 

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

## Other useful stuff
* `git fetch` fetches all remote changes, tags and branches without merging with the current branch.
I usually use this to grab all remote branches and then merge one of them to master.

**If you have suggestions, please feel free to pull request. Bear in mind that this sheet is made to be kept simple. Please do not include fancy stuff that are not used by basic users.**
