# Vagrind 사용법

- valgrind --leak-check=yes ./main


```


$ ls
README.md  build.sh  delete.sh  main.c

$ ./build.sh

main.c: In function ‘main’:
main.c:14:14: warning: unused parameter ‘argc’ [-Wunused-parameter]
   14 | int main(int argc, char const *argv[])
      |          ~~~~^~~~
main.c:14:32: warning: unused parameter ‘argv’ [-Wunused-parameter]
   14 | int main(int argc, char const *argv[])
      |                    ~~~~~~~~~~~~^~~~~~
ubuntu@primary:~/Home/linux_c_project/006memory_address2$ ls
README.md  build.sh  delete.sh  main  main.c


$ valgrind --leak-check=yes ./main

==1194== Memcheck, a memory error detector
==1194== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1194== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==1194== Command: ./main
==1194==
Hello world!
==1194== Invalid write of size 1
==1194==    at 0x108898: main (main.c:21)
==1194==  Address 0x4a3a040 is 0 bytes inside a block of size 10 free'd
==1194==    at 0x4867AD0: free (in /usr/libexec/valgrind/vgpreload_memcheck-arm64-linux.so)
==1194==    by 0x108857: f2 (main.c:11)
==1194==    by 0x10887B: main (main.c:17)
==1194==  Block was alloc'd at
==1194==    at 0x4865058: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-arm64-linux.so)
==1194==    by 0x108823: f1 (main.c:7)
==1194==    by 0x108877: main (main.c:16)
==1194==
==1194==
==1194== HEAP SUMMARY:
==1194==     in use at exit: 0 bytes in 0 blocks
==1194==   total heap usage: 2 allocs, 2 frees, 1,034 bytes allocated
==1194==
==1194== All heap blocks were freed -- no leaks are possible
==1194==
==1194== For lists of detected and suppressed errors, rerun with: -s
==1194== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)


```

<br>

# valgrind로leak_memory체크하기_C언어_C++메모리체크하기_디버그#debug #leakmemory #valgrind

https://youtu.be/eskamOQkSf4


<br>

# valgrind로leak_memory체크하기_Rust언어_힙메모리체크하기_디버그 #leakmemory #rust #valgrind #heapmemory

https://youtu.be/cKJuXLDt-y4

<br>

<hr>




#  Accessing address and value of x using pointer variable ptr

https://www.includehelp.com/c/pointers-declarations-in-c-programming-language.aspx

<br>

<hr>

# Result :

```
  
$ ./main


Memory address of x: 0x16ef1ef48
Value x: 2098

```

