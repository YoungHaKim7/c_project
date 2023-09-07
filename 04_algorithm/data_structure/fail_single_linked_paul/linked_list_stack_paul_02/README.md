# valgrind --leak-check=yes ./a.out


- include "malloc_linux.h" 교체 후 리눅스에서 실행

- gcc main.c

```
valgrind --leak-check=yes ./a.out
==1127== Memcheck, a memory error detector
==1127== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1127== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==1127== Command: ./a.out
==1127==
543215421==1127==
==1127== HEAP SUMMARY:
==1127==     in use at exit: 64 bytes in 4 blocks
==1127==   total heap usage: 6 allocs, 2 frees, 1,104 bytes allocated
==1127==
==1127== 64 (16 direct, 48 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 2
==1127==    at 0x4849D8C: malloc (vg_replace_malloc.c:309)
==1127==    by 0x1088E7: add (in /home/ubuntu/Home/linux_c_project/linked_list/a.out)
==1127==    by 0x108B03: main (in /home/ubuntu/Home/linux_c_project/linked_list/a.out)
==1127==
==1127== LEAK SUMMARY:
==1127==    definitely lost: 16 bytes in 1 blocks
==1127==    indirectly lost: 48 bytes in 3 blocks
==1127==      possibly lost: 0 bytes in 0 blocks
==1127==    still reachable: 0 bytes in 0 blocks
==1127==         suppressed: 0 bytes in 0 blocks
==1127==
==1127== For lists of detected and suppressed errors, rerun with: -s
==1127== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```


# c언어로 만든 싱글 링크드 리스트 linked list ( 추가, 삽입 , 삭제) 백지부터 설명 시작

https://youtu.be/3ZdafcIvREw

<br>

<hr>

# Creating the Node of a Single Linked List

https://youtu.be/DneLxrPmmsw

<br>


## C Programming & Data Structures Series

https://youtube.com/playlist?list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM

<br>

<hr>

# Result :

```
  
$ ./main

45

```

