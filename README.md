I highly recommend writing your own tests, because it's good practice. Also most of my tests don't catch all edge cases, so don't rely on them entirely

# Permanent Instalation
Install and alias program in ~/.zshrc
```
git clone https://github.com/jules-bleijenberg/easy_run.git ~/.easy_run && alias er="$HOME/.easy_run/main.sh";
```
# Temporary Instalation
Install and alias program
```
git clone https://github.com/jules-bleijenberg/easy_run.git ~/.easy_run && alias er=~/.easy_run/main.sh
```
Copy test files (replace c_00 with appropriate name)
```
cp -r ~/.easy_run/Tests/c_00/tests ~/sgoinfre
```
# Uninstall
```
rm -rf ~/.easy_run && unalias er
```
