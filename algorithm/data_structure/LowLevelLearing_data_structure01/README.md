# every good programmer should know how to code this data structure (its easy)

<br>

https://youtu.be/dti0F7w3yOQ

<br>

<hr>

# valgrind --leak-check=yes ./a.out


```
valgrind --leak-check=yes ./a.out


$ ./build.sh
main.c: In function 'main':
main.c:85:27: warning: unused variable 'new' [-Wunused-variable]
   85 |                     Node *new = addNode(option);
      |                           ^~~
main.c:71:14: warning: unused parameter 'argc' [-Wunused-parameter]
   71 | int main(int argc, char **argv)
      |          ~~~~^~~~
main.c:71:27: warning: unused parameter 'argv' [-Wunused-parameter]
   71 | int main(int argc, char **argv)
      |                    ~~~~~~~^~~~
❯ valgrind --leak-check=yes ./main
==14629== Memcheck, a memory error detector
==14629== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14629== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==14629== Command: ./main
==14629== 
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
3
You have the following options: 
        1. Add a node to the list.
        2. Remove a node to the list.
        3. Insert a node to the list.
        4. Print your list.
        5. Quit. 
4545
You have the following options: 
        1. Add a node to the list.
        2. Remove a node to the list.
        3. Insert a node to the list.
        4. Print your list.
        5. Quit. 
1
WHat data should I insert? : 
232323231
You have the following options: 
        1. Add a node to the list.
        2. Remove a node to the list.
        3. Insert a node to the list.
        4. Print your list.
        5. Quit. 
4
232323231->2323->
You have the following options: 
        1. Add a node to the list.
        2. Remove a node to the list.
        3. Insert a node to the list.
        4. Print your list.
        5. Quit. 
5
==14629== 
==14629== HEAP SUMMARY:
==14629==     in use at exit: 32 bytes in 2 blocks
==14629==   total heap usage: 4 allocs, 2 frees, 2,080 bytes allocated
==14629== 
==14629== LEAK SUMMARY:
==14629==    definitely lost: 0 bytes in 0 blocks
==14629==    indirectly lost: 0 bytes in 0 blocks
==14629==      possibly lost: 0 bytes in 0 blocks
==14629==    still reachable: 32 bytes in 2 blocks
==14629==         suppressed: 0 bytes in 0 blocks
==14629== Reachable blocks (those to which a pointer was found) are not shown.
==14629== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==14629== 
==14629== For lists of detected and suppressed errors, rerun with: -s
==14629== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


```


