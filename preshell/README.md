# Simple Shell # 

![contributors](https://img.shields.io/github/contributors/salvaborit/holbertonschool-simple_shell)
### *About:* ###
This program is based in the 5.0.17 shell version, with a really simple usage, how are you going to see below, that program execute commands read from a command line string, the standard input.

### Requiments: ###
* Linux
* git
* gcc

### Installation and compilation: ###
_You can clone:_
` git clone https://github.com/C-Mauro/holbertonschool-printf.git `

_compilation:_
` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh `

### syntax of commands shell ##
` cisfun$ [command] -[parameters]... `

**_Some examples with classical [commands and arguments](https://afni.nimh.nih.gov/pub/dist/edu/data/CD.expanded/AFNI_data6/unix_tutorial/misc/uni_commands.html):_**

[commands]: A shell command is one that is processed internally by the shell. There is no corresponding executable program.

[parameters]: Can add some parameters to your the command, if any.
` cisfun$ [command] [-parameter 1] [parameter 2] ...`

**Simple usage with ls:**

*_input:_*
`cisfun$ ls`

*_output:_*

```
cisfun$ ls
a.out    environ.c  main.c  README.md  shellclear
environ  hsh        main.h  shell      sig.c
cisfun$
```
*_input:_*
` cisfun$ ls -l -a -h `
you can also do:
` cisfun$ ls -lah `

*_output:_*

```
cisfun$ ls -lah
total 3.0M
drwxr-xr-x 3 root root  194 Aug  5 03:41 .
drwx------ 1 root root 4.0K Aug  5 03:34 ..
-rwxr-xr-x 1 root root  18K Aug  4 05:15 a.out
-rwxr-xr-x 1 root root  17K Aug  3 12:48 environ
-rw-r--r-- 1 root root  153 Aug  3 12:48 environ.c
drwxr-xr-x 8 root root  220 Aug  3 11:25 .git
-rwxr-xr-x 1 root root  20K Aug  3 11:20 .hsh
-rwxr-xr-x 1 root root  21K Aug  3 11:20 hsh
-rw-r--r-- 1 root root 3.4K Aug  5 03:28 main.c
-rw-r--r-- 1 root root  16K Aug  5 03:16 .main.c.swp
-rw-r--r-- 1 root root  464 Aug  5 03:29 main.h
-rw-r--r-- 1 root root    7 Aug  3 11:20 README.md
-rwxr-xr-x 1 root root 2.9M Aug  5 03:29 shell
-rwxr-xr-x 1 root root  22K Aug  4 17:20 shellclear
-rw-r--r-- 1 root root   97 Aug  3 12:15 sig.c
cisfun$

```


#### _Some basic commands:_ ####
[ls](https://man7.org/linux/man-pages/man1/ls.1.html): list the contents of the current directory
  _-l:_ use a long listing format
  _-a_ do not ignore entries starting with **.**
  
  `cisfun$ ls [parameter]`
  
  [pwd](https://man7.org/linux/man-pages/man1/pwd.1.html): print the current working directory.
  
 ` cisfun$ pwd `
  
[cd](https://man7.org/linux/man-pages/man1/cd.1p.html): change the current directory.

`cisfun $cd [directory] `

**_You can read more about these commands if you want:_**
 #### [Learn about commands.](https://www.javatpoint.com/linux-commands) ####

### Some examples with interactive and non-interactive mode: ###

 **_First when you use the interactive mode:_**
________________________
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
````
_________________________
## ##
## ##

**_And then, in non-interactive mode:_**
_________________________
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
```
_________________________

### _You can find these files:_ ###

`main.c` 
**Contain:**
* The main function.
* free_ap
* check_access
* path_dirs_to_ap
* tokenizer
* fork_and_exec
* _getenv

` main.h `
**Contain:**
Header file, here you can find all the prototypes of the functions.

**_Authors:_**
* [Salvador Borit](https://github.com/salvaborit) ![follow](https://img.shields.io/github/followers/salvaborit?style=social)
* [Camila Mauro](https://github.com/C-Mauro) ![follow](https://img.shields.io/github/followers/C-Mauro?style=social)



