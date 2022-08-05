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
` cisfun$ ls -l -a -h `
you can also do:
` cisfun$ ls -lah `

*_output:_*
```

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
[Salvador Borit](https://github.com/salvaborit)
[Camila Mauro](https://github.com/C-Mauro)



