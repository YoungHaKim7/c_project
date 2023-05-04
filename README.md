# vim tab setting

```
set tabstop=2
set shiftwidth=2
```

# C / C++ | freeCodeCamp.org

https://youtube.com/playlist?list=PLWKjhJtqVAbmUE5IqyfGYEYjrZBYzaT4m

# Microsoft C++, C, and Assembler documentation(C MSDN)

- Learn how to use C++, C, and assembly language to develop applications, services, and tools for your platforms and devices.

https://learn.microsoft.com/en-us/cpp/?view=msvc-170

# c-language(MS)

https://learn.microsoft.com/en-us/cpp/c-language/?view=msvc-170

# MicroSoft Learn (Samples C)

https://learn.microsoft.com/en-us/samples/browse/?languages=c


# Smile Han의 C 언어 프로그래밍

https://youtube.com/playlist?list=PLJqaIeuL7nuFgbxCyhtZ7xBUNhdV9Qy5R

# The LLVM Compiler Infrastructure 

https://llvm.org/

<br>

# Creating the Node of a Single Linked List

https://youtu.be/DneLxrPmmsw

<br>


## C Programming & Data Structures Series

https://youtube.com/playlist?list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM

<br>

<hr>

<br>

# C Language Tutorials In Hindi __ 1

https://youtube.com/playlist?list=PLu0W_9lII9aiXlHcLx-mDH1Qul38wD3aR

<br>

# How I program C | Eskil Steenberg ___ 2

https://youtu.be/443UNeGrFoM

<br>

# Advanced C: The UB and optimizations that trick good programmers. | Eskil Steenberg

https://youtu.be/w3_e9vZj7D8


<br>

# Modern C and What We Can Learn From It - Luca Sas [ ACCU 2021 ]

https://youtu.be/QpAhX-gsHMs

<br>

# C Language Tutorial Videos 

https://youtube.com/playlist?list=PLVlQHNRLflP8IGz6OXwlV_lgHgc72aXlh

<br>

<hr>

# build.sh

```
#!/bin/bash

clang -pthread -lm -Wall -Wextra -ggdb -o main main.c

or 

gcc -pthread -lm -Wall -Wextra -ggdb -o main main.c

```

<br>

# delete.sh

```
#!/bin/bash

rm -rf main main.dSYM

```

<br>

# xxd 명령어 이해하기

https://www.tutorialspoint.com/unix_commands/xxd.htm

- 예시 exercise/004string/main.c 참고

```
$ ./main "ready" "set" "go" | xxd -g 1

00000000: 61 72 67 76 20 3d 20 30 78 31 36 64 37 30 33 32  argv = 0x16d7032
00000010: 61 30 0a 61 72 67 76 5b 30 5d 20 3d 20 30 78 31  a0.argv[0] = 0x1
00000020: 36 64 37 30 33 34 64 38 0a 2e 2f 6d 61 69 6e 0a  6d7034d8../main.
00000030: 61 72 67 76 5b 31 5d 20 3d 20 30 78 31 36 64 37  argv[1] = 0x16d7
00000040: 30 33 34 64 66 0a 72 65 61 64 79 0a 61 72 67 76  034df.ready.argv
00000050: 5b 32 5d 20 3d 20 30 78 31 36 64 37 30 33 34 65  [2] = 0x16d7034e
00000060: 35 0a 73 65 74 0a 61 72 67 76 5b 33 5d 20 3d 20  5.set.argv[3] =
00000070: 30 78 31 36 64 37 30 33 34 65 39 0a 67 6f 0a     0x16d7034e9.go.
```

<br>

<hr>

## C Program in Hindi: C Tutorial In Hindi

[Basic Structure of C Program in Hindi](https://www.youtube.com/watch?v=5SIBB589fAg&t=424s)

<br>

# 자료 구조

https://github.com/YoungHaKim7/c_project/tree/main/exercise/002stack

- 영어 출처
  https://en.wikipedia.org/wiki/Association_list

<table border="1">
    <tr>
    <td colspan="2" align="center">자료 구조(Well-known data structures)</td>
    </tr>
    <tr align="center">
        <td>유형(Type) </td>
        <td> 컬렉션(Collection) , 컨테이너(Container)</td>
    </tr>
    <tr align="center">
        <td> 추상ADT<br>Abstract Data Type </td>
        <td> 연관 배열(Associative array), 우선 순위 덱(Priority Deque), 덱(Deque), 리스트(List),<br> 멀티맵, 우선순위 큐(Priority Queue), 큐(Queue), <br>집합 (멀티셋, 분리 집합),<br> 스택(stack) <br>
Associative array(Multimap, Retrieval Data Structure), List, StackQueue(Double-ended queue), Priority queue(Double-ended priority queue), Set(Multiset, Disjoint-set)
    </td>
    </tr>
    <tr align="center">
        <td>배열(Array) </td>
        <td> 
비트 배열(Bit Array), 환형 배열(Circular array), 동적 배열(Dynamic Array),<br> 해시 테이블(Hash Table), 해시드 어레이 트리(Hashed Array Tree), 희소 배열(Sparse array)
        </td>
    </tr>
    <tr align="center">
        <td>연결형(Linked) </td>
        <td> 연관 리스트(Association list), 
        <br>
        <br>연결 리스트(Linked List) - 단일연결(Singly Linked List), 이중연결(Doubly Linked List), 원형 연결(Circular Linked List)<br><br>Association list,<br> Linked list, Skip list, Unrolled linked list, XOR linked list</td>
    </tr>
    <tr align="center">
        <td>트리(Trees) </td>
        <td>B 트리,<br> 이진 탐색 트리(AA, AVL, 레드-블랙, 자가 균형, splay) <br> 힙(이진 힙, 피보나치) ,<br> R 트리( R*, R+, 힐버트),<br> 트리(해시 트리)<br><br>B-tree, Binary search tree(AA tree, AVL tree, Red–black tree, Self-balancing tree, Splay tree),<br> Heap(Binary heap, Binomial heap, Fibonacci heap),<br> R-tree(R* tree, R+ tree, Hilbert R-tree), Trie Hash tree
    </td>
    </tr>
    <tr align="center">
        <td>그래프(Graphs) </td>
        <td>이진 결정 다이어그램<br>Binary decision diagram, Directed acyclic graph, Directed acyclic word graph </td>
    </tr>
</table>

<br>

<hr>

# Big-O Cheat Sheet(그림으로 이쁘게)

https://dev.to/deciduously/big-o-cheat-sheet-3i7d

<br>

<br>

<hr>

<br>

<hr>

# C Languages Tutorial

https://github.com/EbookFoundation/free-programming-books/blob/main/books/free-programming-books-langs.md#c

# C Tutorial 2

https://www.tutorialspoint.com/cprogramming/

# C 3

["Let us C - Yashavant Kanetkar (PDF) (🗃️ latest 14th edition)](https://ia903402.us.archive.org/1/items/let-us-c/LET%20US%20C.pdf)

# Compilers

Use every available and reasonable set of warning options. Some warning options only work with optimizations enabled, or work better the higher the chosen level of optimization is, for example 
```-Wnull-dereference```
 with GCC.

You should use as many compilers as you can for your platform(s). Each compiler implements the standard slightly differently and supporting multiple will help ensure the most portable, most reliable code.

# GCC / Clang
```-Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic``` 
- use these and consider the following (see descriptions below)

## see descriptions below

- ```-pedantic``` - Warn on language extensions

- ```-Wall -Wextra``` reasonable and standard

- ```-Wshadow``` warn the user if a variable declaration shadows one from a parent context

- ```-Wnon-virtual-dtor``` warn the user if a class with virtual functions has a non-virtual destructor. This helps catch hard to track down memory errors

- ```-Wold-style-cast``` warn for c-style casts

- ```-Wcast-align``` warn for potential performance problem casts
-Wunused warn on anything being unused

- ```-Woverloaded-virtual``` warn if you overload (not override) a virtual function

- ```-Wpedantic``` (all versions of GCC, Clang >= 3.2) warn if non-standard C++ is used

- ```-Wconversion``` warn on type conversions that may lose data

- ```-Wsign-conversion``` (Clang all versions, GCC >= 4.3) warn on sign conversions

- ```-Wmisleading-indentation``` (only in GCC >= 6.0) warn if indentation implies blocks where blocks do not exist

- ```-Wduplicated-cond``` (only in GCC >= 6.0) warn if if / else chain has duplicated conditions

- ```-Wduplicated-branches``` (only in GCC >= 7.0) warn if if / else branches have duplicated code

- ```-Wlogical-op``` (only in GCC) warn about logical operations being used where bitwise were probably wanted

- ```-Wnull-dereference``` (only in GCC >= 6.0) warn if a null dereference is detected

- ```-Wuseless-cast``` (only in GCC >= 4.8) warn if you perform a cast to the same type

- ```-Wdouble-promotion``` (GCC >= 4.6, Clang >= 3.8) warn if float is implicitly promoted to double

- ```-Wformat=2``` warn on security issues around functions that format output (i.e., printf)

- ```-Wlifetime``` (only special branch of Clang currently) shows object lifetime issues

- ```-Wimplicit-fallthrough``` Warns when case statements fall-through. (Included with -Wextra in GCC, not in clang)

Consider using ```-Weverything``` and disabling the few warnings you need to on Clang

- ```-Weffc++``` warning mode can be too noisy, but if it works for your project, use it also.


https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md
