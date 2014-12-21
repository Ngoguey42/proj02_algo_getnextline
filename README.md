# Project #2 GET_NEXT_LINE, Nov 2014
>>>>> #####File descriptor reading

#####Grade ``(108/100)`` ``(108/118)*``
--------  -----------------------
Goals:
- [X] Create a function returning a line read in a given file descriptor.
A line is terminated by either a '\n', or an EOF.
- [X] Five functions maximum, and a .h file.
- [X] No global variables.

Bonuses:
- [X] Do not use no more than one static variable.
- [X] Handle multiple files descriptors.

Prototype:
```c
int	get_next_line(int fd, char **line);
```

Compiling project, (Requires a main.c file) ([Mine](https://github.com/Ngoguey42/gnl_testdir)):
```sh
make -C libft/ fclean
make -C libft/
gcc -Wall -Wextra -Werror -I libft/includes/ -c get_next_line.c
gcc -Wall -Wextra -Werror -I libft/includes/ -c main.c
gcc -o test_gnl get_next_line.o main.o -L libft/ -lft
```
<br><br><br><br><br><br><br><br>


```
All my C files strictly observes school's norm, it may often lead to odd or illogical syntaxes.
- [ ] Forbiden keywords: for, do, switch, goto.
- [ ] No more than 25 lines inside a function block.
- [ ] No more than 80 characters per lines.
- [ ] At most 5 functions per files.
- [ ] Only 1 declaration per line.  
- [ ] No declaration and assignation on the same line.
- [ ] At most 1 assignation per line.
- [ ] No more than 4 parameters for a function.
- [ ] No nested ternary.
- [ ] Comments alowed at the top of the file.
```
```
*
- A grade of 85 was required to validate the project.
- A maximum grade of 118 was reachable.
- Second sessions are organised for failed projects.
```
