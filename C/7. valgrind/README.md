## Valgrind

Valgrind Basics. 

1. Install valgrind

```sudo apt install valgrind```

2. Compile the test program with debug information

``gcc -g simple_program.c``

3. Run Valgrind 

```valgrind --tool=memcheck --leak-check=yes --show-leak-kinds=all --num-callers=20 --track-fds=yes ./a.out```

4. Sample output

![valgrind output](.\Valgrind.png "Valgrind Output")


5. Command Details 

| Flag | Description | More Options |
| ----------- | --------- | -------- |
| --tool = memcheck | checks for memory management problems | cachegrind, callgrind, massif, helgrind, DRD, Lackey, Nulgrind, DHAT |
| --leak-check=yes  | search for memory leaks at exit? | no, summary, full |
| --show-leak-kinds=all  | which leak kinds to show?[definite,possible] | a comma separated list of one or more definite, indirect, direct, possible , all for all leak kinds, none for none |
| --num-callers=20  | show <number> callers in stack traces [12] | |
| --track-fds=yes  | track open file descriptors? [no] all includes reporting stdin, stdout and stderr | no, yes, all |

6. Error Types (memcheck)
 
- illegal read / illegal write errors
- Use of uninitialized Values 
- Illegal Frees
- Checks parameters to system calls if all of the buffer is valid
- Checks source buffer and destinition buffer while copying if they overlap.