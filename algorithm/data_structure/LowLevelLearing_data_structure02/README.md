# every good programmer should know how to code this data structure (its easy)

<br>

https://youtu.be/dti0F7w3yOQ

<br>

<hr>

# valgrind --leak-check=yes ./a.out

```
$ valgrind --leak-check=yes ./main

==7626== Memcheck, a memory error detector
==7626== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==7626== Using Valgrind-3.20.0 and LibVEX; rerun with -h for copyright info
==7626== Command: ./main
==7626==

You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
1
WHat data should I insert? :
232341
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
3
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
232323
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
4
232341->
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
5
==7626==
==7626== HEAP SUMMARY:
==7626==     in use at exit: 16 bytes in 1 blocks
==7626==   total heap usage: 3 allocs, 2 frees, 2,064 bytes allocated
==7626==
==7626== LEAK SUMMARY:
==7626==    definitely lost: 0 bytes in 0 blocks
==7626==    indirectly lost: 0 bytes in 0 blocks
==7626==      possibly lost: 0 bytes in 0 blocks
==7626==    still reachable: 16 bytes in 1 blocks
==7626==         suppressed: 0 bytes in 0 blocks
==7626== Reachable blocks (those to which a pointer was found) are not shown.
==7626== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==7626==
==7626== For lists of detected and suppressed errors, rerun with: -s
==7626== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```



