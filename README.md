<p align="center"><img src='https://marketing4ecommerce.net/wp-content/uploads/2018/06/GitHub-logo-2-imagen.jpg' alt='Banner' width=40%></p>

# Simple Shell

This is our Simple Linux Shell program. 

A shell is a program working as the middle man between the Kernel and the user. It's a command line interpreter which receives inputs from the user and passes them onto the Kernel. 

.

## Program Compilation

This program is intended to be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.

You can use the command 'gcc -Wall -Werror -Wextra -pedantic *.c -o simple_shell'.This way you can execute the program with './simple_shell'

.

## Execution of the program

There are 2 ways executing this Shell: interactive and non-interactive.

The operation mode of the shell depends on what the user sent to the program. 

To elaborate, this program detects if the input is sent through the built in echo with pipes | to execute it. This is the non-interactive Shell.

Contrary to the non-interactive, the interactive mode allows us to input and execute commands for an infinite amount of times as long as the shell is running and it's not "exit" or "EOF"(Ctrl + d). This mode will have an infinite loop that prints the prompt of our Shell ($) and read any input of the user with getline.

.

## Program Flowcharts

<p align="center"><img src='https://github.com/felipevargas-bz/simple_shell/blob/main/Flowchart_Shell_Interactiva.jpg?raw=true' alt='Banner' width=50%></p>

.

## Examples

```
non-interactive mode
dev@Felipe-PC simple_shell ±|main ✗|→ echo ls | ./hsh
2-functions_auxiliars.c  Flowchart_Shell_Interactiva.jpg  a.out       check_executable.c  execute.c              get_path.c  hsh     shell_direc.c  tok_path.c
AUTHORS                  README.md                        argument.c  concat.c            functions_auxiliars.c  header.h    main.c  tok_arg.c
dev@Felipe-PC simple_shell ±|main ✗|→

interactive mode
dev@Felipe-PC simple_shell ±|main ✗|→ ./hsh
shell $ ls
2-functions_auxiliars.c  Flowchart_Shell_Interactiva.jpg  a.out       check_executable.c  execute.c              get_path.c  hsh     shell_direc.c  tok_path.c
AUTHORS                  README.md                        argument.c  concat.c            functions_auxiliars.c  header.h    main.c  tok_arg.c
shell $
```

.

## Licence

This program doesn't currently have any registered license. This README will reflec any further update.
.

## Bugs

This program doesn't have know bugs yet.

## Extra documentation

* __Kerrisk, Michael, 2010, The Linux Programming Interface.__
* __Shotts, William, 2019, The Linux Command Line__
* __Wikipedia, Kernel (computer science)__
* __GNU.org, Manuals__
* __GNU.org, The GNU C Library Reference Manual__

.

### Authors :black_nib:

* __Marcela Areiza, marce.3210@gmail.com__
* __Angel Felipe Vargas, felipevargas.bz@gmail.com__
* __Christian Martinez, crismartine.e@gmail.com__

<p aling="center">
<a href="https://www.holbertonschool.com" target="_blank">
<img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School"  /></a>
</p>
