# Creating the Node of a Single Linked List

https://youtu.be/DneLxrPmmsw

<br>


## C Programming & Data Structures Series

https://youtube.com/playlist?list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM

<br>

<hr>

# build.sh

```
#!/bin/bash

clang -pthread -lm -Wall -Wextra -ggdb -o main main.c

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
