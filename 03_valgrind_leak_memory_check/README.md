# ```--fsanitize=address``` 사용법

```
g++ -fsanitize=address -g3 -std=c++11 vector_ex01.cpp -o vector_ex01
```


<hr>

# Memory & Data, Video 3: Memory address - Luis Ceze

https://economiceco.tistory.com/12219

<hr>

# C Dynamic Memory Debugging with Valgrind

https://youtu.be/bb1bTJtgXrI


<br>

```
valgrind --leak-check=full ./mem_leak.out


valgrind --leak-check=yes ./main
```

<hr>

# valgrind --leak-check=yes ./a.out


```

$ valgrind --leak-check=yes ./a.out

==1239== Memcheck, a memory error detector
==1239== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1239== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==1239== Command: ./a.out
==1239==
543215421==1239==
==1239== HEAP SUMMARY:
==1239==     in use at exit: 64 bytes in 4 blocks
==1239==   total heap usage: 6 allocs, 2 frees, 1,104 bytes allocated
==1239==
==1239== 64 (16 direct, 48 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 2
==1239==    at 0x4865058: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-arm64-linux.so)
==1239==    by 0x1088E7: add (in /home/ubuntu/Home/linux_c_project/linked_list/a.out)
==1239==    by 0x108B03: main (in /home/ubuntu/Home/linux_c_project/linked_list/a.out)
==1239==
==1239== LEAK SUMMARY:
==1239==    definitely lost: 16 bytes in 1 blocks
==1239==    indirectly lost: 48 bytes in 3 blocks
==1239==      possibly lost: 0 bytes in 0 blocks
==1239==    still reachable: 0 bytes in 0 blocks
==1239==         suppressed: 0 bytes in 0 blocks
==1239==
==1239== For lists of detected and suppressed errors, rerun with: -s
==1239== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
ub
```

# c언어로 만든 싱글 링크드 리스트 linked list ( 추가, 삽입 , 삭제) 백지부터 설명 시작

https://youtu.be/3ZdafcIvREw

<br>

<hr>

# Creating the Node of a Single Linked List

https://youtu.be/DneLxrPmmsw

<br>

<hr>


## C Programming & Data Structures Series

https://youtube.com/playlist?list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM

<br>

<hr>

# Result :

```
  
$ ./main

45

```

