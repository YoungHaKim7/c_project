# Vagrind 사용법

- valgrind --leak-check=yes ./main


```


$ ls
README.md  build.sh  delete.sh  main.c

$ ./build.sh
main.c: In function 'main':
main.c:52:14: warning: unused parameter 'argc' [-Wunused-parameter]
   52 | int main(int argc, char const *argv[])
      |          ~~~~^~~~
main.c:52:32: warning: unused parameter 'argv' [-Wunused-parameter]
   52 | int main(int argc, char const *argv[])
      |                    ~~~~~~~~~~~~^~~~~~


$ valgrind --leak-check=yes ./main

==16362== Memcheck, a memory error detector
==16362== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16362== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==16362== Command: ./main
==16362== 
==16362== Invalid write of size 4
==16362==    at 0x1091F0: test1 (main.c:11)
==16362==    by 0x109440: main (main.c:54)
==16362==  Address 0x4a99040 is 0 bytes inside a block of size 3 alloc'd
==16362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x1091C8: test1 (main.c:9)
==16362==    by 0x109440: main (main.c:54)
==16362== 
==16362== Conditional jump or move depends on uninitialised value(s)
==16362==    at 0x48E4B56: __vfprintf_internal (vfprintf-internal.c:1516)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109220: test1 (main.c:12)
==16362==    by 0x109440: main (main.c:54)
==16362== 
==16362== Use of uninitialised value of size 8
==16362==    at 0x48C833B: _itoa_word (_itoa.c:177)
==16362==    by 0x48E3B3D: __vfprintf_internal (vfprintf-internal.c:1516)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109220: test1 (main.c:12)
==16362==    by 0x109440: main (main.c:54)
==16362== 
==16362== Conditional jump or move depends on uninitialised value(s)
==16362==    at 0x48C834C: _itoa_word (_itoa.c:177)
==16362==    by 0x48E3B3D: __vfprintf_internal (vfprintf-internal.c:1516)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109220: test1 (main.c:12)
==16362==    by 0x109440: main (main.c:54)
==16362== 
==16362== Conditional jump or move depends on uninitialised value(s)
==16362==    at 0x48E4643: __vfprintf_internal (vfprintf-internal.c:1516)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109220: test1 (main.c:12)
==16362==    by 0x109440: main (main.c:54)
==16362== 
==16362== Conditional jump or move depends on uninitialised value(s)
==16362==    at 0x48E3C85: __vfprintf_internal (vfprintf-internal.c:1516)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109220: test1 (main.c:12)
==16362==    by 0x109440: main (main.c:54)
==16362== 
0: 0 
==16362== Invalid read of size 4
==16362==    at 0x109206: test1 (main.c:12)
==16362==    by 0x109440: main (main.c:54)
==16362==  Address 0x4a99044 is 1 bytes after a block of size 3 alloc'd
==16362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x1091C8: test1 (main.c:9)
==16362==    by 0x109440: main (main.c:54)
==16362== 
1: 1 
2: 4 
0: 100
1: 101
2: 102
3: 103
4: 104
==16362== Invalid write of size 8
==16362==    at 0x1092CE: test2 (main.c:25)
==16362==    by 0x10944A: main (main.c:55)
==16362==  Address 0x4a994d0 is 0 bytes inside a block of size 40 free'd
==16362==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-am
d64-linux.so)
==16362==    by 0x1092C9: test2 (main.c:24)
==16362==    by 0x10944A: main (main.c:55)
==16362==  Block was alloc'd at
==16362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x109254: test2 (main.c:19)
==16362==    by 0x10944A: main (main.c:55)
==16362== 
==16362== Conditional jump or move depends on uninitialised value(s)
==16362==    at 0x484ED19: strlen (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x48E4DB0: __vfprintf_internal (vfprintf-internal.c:1517)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109420: test4 (main.c:49)
==16362==    by 0x10945E: main (main.c:57)
==16362== 
==16362== Conditional jump or move depends on uninitialised value(s)
==16362==    at 0x484ED28: strlen (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x48E4DB0: __vfprintf_internal (vfprintf-internal.c:1517)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109420: test4 (main.c:49)
==16362==    by 0x10945E: main (main.c:57)
==16362== 
==16362== Conditional jump or move depends on uninitialised value(s)
==16362==    at 0x48F97B7: _IO_new_file_xsputn (fileops.c:1218)
==16362==    by 0x48F97B7: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==16362==    by 0x48E508B: outstring_func (vfprintf-internal.c:239)
==16362==    by 0x48E508B: __vfprintf_internal (vfprintf-internal.c:1517)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109420: test4 (main.c:49)
==16362==    by 0x10945E: main (main.c:57)
==16362== 
==16362== Syscall param write(buf) points to uninitialised byte(s)
==16362==    at 0x4982A37: write (write.c:26)
==16362==    by 0x48F8F6C: _IO_file_write@@GLIBC_2.2.5 (fileops.c:1180)
==16362==    by 0x48FAA60: new_do_write (fileops.c:448)
==16362==    by 0x48FAA60: _IO_new_do_write (fileops.c:425)
==16362==    by 0x48FAA60: _IO_do_write@@GLIBC_2.2.5 (fileops.c:422)
==16362==    by 0x48F9754: _IO_new_file_xsputn (fileops.c:1243)
==16362==    by 0x48F9754: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==16362==    by 0x48E4049: outstring_func (vfprintf-internal.c:239)
==16362==    by 0x48E4049: __vfprintf_internal (vfprintf-internal.c:1593)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109420: test4 (main.c:49)
==16362==    by 0x10945E: main (main.c:57)
==16362==  Address 0x4a99098 is 8 bytes inside a block of size 1,024 alloc'd
==16362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x48ECC23: _IO_file_doallocate (filedoalloc.c:101)
==16362==    by 0x48FBD5F: _IO_doallocbuf (genops.c:347)
==16362==    by 0x48FAFDF: _IO_file_overflow@@GLIBC_2.2.5 (fileops.c:744)
==16362==    by 0x48F9754: _IO_new_file_xsputn (fileops.c:1243)
==16362==    by 0x48F9754: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==16362==    by 0x48E3D28: outstring_func (vfprintf-internal.c:239)
==16362==    by 0x48E3D28: __vfprintf_internal (vfprintf-internal.c:1516)
==16362==    by 0x48CE81E: printf (printf.c:33)
==16362==    by 0x109220: test1 (main.c:12)
==16362==    by 0x109440: main (main.c:54)
==16362== 
String: Hello world! 
==16362== 
==16362== HEAP SUMMARY:
==16362==     in use at exit: 43 bytes in 2 blocks
==16362==   total heap usage: 4 allocs, 2 frees, 1,107 bytes allocated
==16362== 
==16362== 3 bytes in 1 blocks are definitely lost in loss record 1 of 2
==16362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x1091C8: test1 (main.c:9)
==16362==    by 0x109440: main (main.c:54)
==16362== 
==16362== 40 bytes in 1 blocks are definitely lost in loss record 2 of 2
==16362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16362==    by 0x1092FB: test3 (main.c:31)
==16362==    by 0x109454: main (main.c:56)
==16362== 
==16362== LEAK SUMMARY:
==16362==    definitely lost: 43 bytes in 2 blocks
==16362==    indirectly lost: 0 bytes in 0 blocks
==16362==      possibly lost: 0 bytes in 0 blocks
==16362==    still reachable: 0 bytes in 0 blocks
==16362==         suppressed: 0 bytes in 0 blocks
==16362== 
==16362== Use --track-origins=yes to see where uninitialised values come from
==16362== For lists of detected and suppressed errors, rerun with: -s
==16362== ERROR SUMMARY: 41 errors from 14 contexts (suppressed: 0 from 0)

```
## Valgrind  Details

```
$ valgrind --leak-check=yes --track-origins=yes ./main
==16930== Memcheck, a memory error detector
==16930== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16930== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==16930== Command: ./main
==16930== 
==16930== Invalid write of size 4
==16930==    at 0x1091F0: test1 (main.c:11)
==16930==    by 0x109440: main (main.c:54)
==16930==  Address 0x4a99040 is 0 bytes inside a block of size 3 alloc'd
==16930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x1091C8: test1 (main.c:9)
==16930==    by 0x109440: main (main.c:54)
==16930== 
==16930== Conditional jump or move depends on uninitialised value(s)
==16930==    at 0x48E4B56: __vfprintf_internal (vfprintf-internal.c:1516)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109220: test1 (main.c:12)
==16930==    by 0x109440: main (main.c:54)
==16930== 
==16930== Use of uninitialised value of size 8
==16930==    at 0x48C833B: _itoa_word (_itoa.c:177)
==16930==    by 0x48E3B3D: __vfprintf_internal (vfprintf-internal.c:1516)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109220: test1 (main.c:12)
==16930==    by 0x109440: main (main.c:54)
==16930== 
==16930== Conditional jump or move depends on uninitialised value(s)
==16930==    at 0x48C834C: _itoa_word (_itoa.c:177)
==16930==    by 0x48E3B3D: __vfprintf_internal (vfprintf-internal.c:1516)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109220: test1 (main.c:12)
==16930==    by 0x109440: main (main.c:54)
==16930== 
==16930== Conditional jump or move depends on uninitialised value(s)
==16930==    at 0x48E4643: __vfprintf_internal (vfprintf-internal.c:1516)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109220: test1 (main.c:12)
==16930==    by 0x109440: main (main.c:54)
==16930== 
==16930== Conditional jump or move depends on uninitialised value(s)
==16930==    at 0x48E3C85: __vfprintf_internal (vfprintf-internal.c:1516)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109220: test1 (main.c:12)
==16930==    by 0x109440: main (main.c:54)
==16930== 
0: 0 
==16930== Invalid read of size 4
==16930==    at 0x109206: test1 (main.c:12)
==16930==    by 0x109440: main (main.c:54)
==16930==  Address 0x4a99044 is 1 bytes after a block of size 3 alloc'd
==16930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x1091C8: test1 (main.c:9)
==16930==    by 0x109440: main (main.c:54)
==16930== 
1: 1 
2: 4 
0: 100
1: 101
2: 102
3: 103
4: 104
==16930== Invalid write of size 8
==16930==    at 0x1092CE: test2 (main.c:25)
==16930==    by 0x10944A: main (main.c:55)
==16930==  Address 0x4a994d0 is 0 bytes inside a block of size 40 free'd
==16930==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-am
d64-linux.so)
==16930==    by 0x1092C9: test2 (main.c:24)
==16930==    by 0x10944A: main (main.c:55)
==16930==  Block was alloc'd at
==16930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x109254: test2 (main.c:19)
==16930==    by 0x10944A: main (main.c:55)
==16930== 
==16930== Conditional jump or move depends on uninitialised value(s)
==16930==    at 0x484ED19: strlen (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x48E4DB0: __vfprintf_internal (vfprintf-internal.c:1517)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109420: test4 (main.c:49)
==16930==    by 0x10945E: main (main.c:57)
==16930==  Uninitialised value was created by a stack allocation
==16930==    at 0x1090A0: ??? (in /home/young/my_project/c_lang/c_project/valgr
ind_leak_memory_check/3malloc_free/main)
==16930== 
==16930== Conditional jump or move depends on uninitialised value(s)
==16930==    at 0x484ED28: strlen (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x48E4DB0: __vfprintf_internal (vfprintf-internal.c:1517)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109420: test4 (main.c:49)
==16930==    by 0x10945E: main (main.c:57)
==16930==  Uninitialised value was created by a stack allocation
==16930==    at 0x1090A0: ??? (in /home/young/my_project/c_lang/c_project/valgr
ind_leak_memory_check/3malloc_free/main)
==16930== 
==16930== Conditional jump or move depends on uninitialised value(s)
==16930==    at 0x48F97B7: _IO_new_file_xsputn (fileops.c:1218)
==16930==    by 0x48F97B7: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==16930==    by 0x48E508B: outstring_func (vfprintf-internal.c:239)
==16930==    by 0x48E508B: __vfprintf_internal (vfprintf-internal.c:1517)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109420: test4 (main.c:49)
==16930==    by 0x10945E: main (main.c:57)
==16930==  Uninitialised value was created by a stack allocation
==16930==    at 0x1090A0: ??? (in /home/young/my_project/c_lang/c_project/valgr
ind_leak_memory_check/3malloc_free/main)
==16930== 
==16930== Syscall param write(buf) points to uninitialised byte(s)
==16930==    at 0x4982A37: write (write.c:26)
==16930==    by 0x48F8F6C: _IO_file_write@@GLIBC_2.2.5 (fileops.c:1180)
==16930==    by 0x48FAA60: new_do_write (fileops.c:448)
==16930==    by 0x48FAA60: _IO_new_do_write (fileops.c:425)
==16930==    by 0x48FAA60: _IO_do_write@@GLIBC_2.2.5 (fileops.c:422)
==16930==    by 0x48F9754: _IO_new_file_xsputn (fileops.c:1243)
==16930==    by 0x48F9754: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==16930==    by 0x48E4049: outstring_func (vfprintf-internal.c:239)
==16930==    by 0x48E4049: __vfprintf_internal (vfprintf-internal.c:1593)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109420: test4 (main.c:49)
==16930==    by 0x10945E: main (main.c:57)
==16930==  Address 0x4a99098 is 8 bytes inside a block of size 1,024 alloc'd
==16930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x48ECC23: _IO_file_doallocate (filedoalloc.c:101)
==16930==    by 0x48FBD5F: _IO_doallocbuf (genops.c:347)
==16930==    by 0x48FAFDF: _IO_file_overflow@@GLIBC_2.2.5 (fileops.c:744)
==16930==    by 0x48F9754: _IO_new_file_xsputn (fileops.c:1243)
==16930==    by 0x48F9754: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==16930==    by 0x48E3D28: outstring_func (vfprintf-internal.c:239)
==16930==    by 0x48E3D28: __vfprintf_internal (vfprintf-internal.c:1516)
==16930==    by 0x48CE81E: printf (printf.c:33)
==16930==    by 0x109220: test1 (main.c:12)
==16930==    by 0x109440: main (main.c:54)
==16930==  Uninitialised value was created by a stack allocation
==16930==    at 0x1090A0: ??? (in /home/young/my_project/c_lang/c_project/valgr
ind_leak_memory_check/3malloc_free/main)
==16930== 
String: Hello world! 
==16930== 
==16930== HEAP SUMMARY:
==16930==     in use at exit: 43 bytes in 2 blocks
==16930==   total heap usage: 4 allocs, 2 frees, 1,107 bytes allocated
==16930== 
==16930== 3 bytes in 1 blocks are definitely lost in loss record 1 of 2
==16930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x1091C8: test1 (main.c:9)
==16930==    by 0x109440: main (main.c:54)
==16930== 
==16930== 40 bytes in 1 blocks are definitely lost in loss record 2 of 2
==16930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-
amd64-linux.so)
==16930==    by 0x1092FB: test3 (main.c:31)
==16930==    by 0x109454: main (main.c:56)
==16930== 
==16930== LEAK SUMMARY:
==16930==    definitely lost: 43 bytes in 2 blocks
==16930==    indirectly lost: 0 bytes in 0 blocks
==16930==      possibly lost: 0 bytes in 0 blocks
==16930==    still reachable: 0 bytes in 0 blocks
==16930==         suppressed: 0 bytes in 0 blocks
==16930== 
==16930== For lists of detected and suppressed errors, rerun with: -s
==16930== ERROR SUMMARY: 41 errors from 14 contexts (suppressed: 0 from 0)

```

<br>

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

