# every good programmer should know how to code this data structure (its easy)

<br>

https://youtu.be/dti0F7w3yOQ

<br>

<hr>

# valgrind --leak-check=yes ./a.out


```

$ valgrind --leak-check=full ./main
==8512== Memcheck, a memory error detector
==8512== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==8512== Using Valgrind-3.20.0 and LibVEX; rerun with -h for copyright info
==8512== Command: ./main
==8512==
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
1
WHat data should I insert? :
2323
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
1
WHat data should I insert? :
11111
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
4
11111->2323->
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
3
What data should I insert? :
;4
What position? :
4
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
4
11111->4->2323->
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
1
WHat data should I insert? :
2222222
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
4
2222222->11111->4->2323->
You have the following options:
	1. Add a node to the list.
	2. Remove a node to the list.
	3. Insert a node to the list.
	4. Print your list.
	5. Quit.
5
==8512==
==8512== HEAP SUMMARY:
==8512==     in use at exit: 64 bytes in 4 blocks
==8512==   total heap usage: 6 allocs, 2 frees, 2,112 bytes allocated
==8512==
==8512== LEAK SUMMARY:
==8512==    definitely lost: 0 bytes in 0 blocks
==8512==    indirectly lost: 0 bytes in 0 blocks
==8512==      possibly lost: 0 bytes in 0 blocks
==8512==    still reachable: 64 bytes in 4 blocks
==8512==         suppressed: 0 bytes in 0 blocks
==8512== Reachable blocks (those to which a pointer was found) are not shown.
==8512== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==8512==
==8512== For lists of detected and suppressed errors, rerun with: -s
==8512== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```




