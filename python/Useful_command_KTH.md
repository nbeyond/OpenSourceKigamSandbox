# Useful command for GIT in bash terminal 
------------------------------------------------------
## GIT use in terminal
----------------------------------------------------- 
```bash
$ cd - : go to previous directory
$ cd or cd ~: go to home directory ('~' means home directory.)
$ history : command history
$ ls -al : show all files including hiden files
$ pwd : show the current folder path
$ cp 'file1' ~/ 'file2' : copy file1 to home directory (~/) as a name of file2
$ source ~/.bashrc : load source files from '.bashrc' files in home directory(~/) (when loading .bashrc from home directory initially)
$ git checkout -- file name : when merge conflict error occurs while gpull, first you need to change the file to previous version. (=It means the file will be changed to the current repository type.) Then, do gpull.
$ git pull origin branch_name (=gpull) : pull branch
$ git push origin branch_name (=gpush) : push my directory files to branch
$ git ls-remote (=gls) : git branch check
$ git checkout branch_name : change branch
``` 
----------------------------------------------------- 
## GIT use in GIThub
----------------------------------------------------- 
- merge: pull request -> new pull request -> choose base and compare branch (base: the branch which you want to be master, compare: the branch which you have changing files)

------------------------------------------------------
# Useful command for PYTHON in jupyter notebook
------------------------------------------------------
## Differences between ver.2 & 3
- In ver.3, many other languages are added.
- But in ver.2, some analytical options are provided.

## Cell type change
- Refer 'Help -> keyboard shortcut' 
- esc + m + enter = change to markdown type
- esc + y + enter = change to code type

## Figure plot
- Refer 'Help -> matplotlib references', and any figures you want.