# Big-o-Cheat-sheet

![big-o-cheat-sheet-poster](https://user-images.githubusercontent.com/67513038/236633081-7365b27e-a749-4b27-b8bd-717dd3911e76.png)

# 유료) 그림으로 알고리즘 이랑 코드 비교해서 알려줌 최고

https://log2base2.com/

```c
struct node *head = NULL;
void addFirst(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = head;

    head = newNode;
}

```

<img src="https://github.com/YoungHaKim7/c_project/blob/main/algorithm/images/test1.gif" />

<br>

<hr>

```c
void mirror(struct node *root){
    if(root == NULL)
        return;
    else
    {
        mirror(root->left);
        mirror(root->right);

        struct node *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
    
```

<img src="https://github.com/YoungHaKim7/c_project/blob/main/algorithm/images/test2.gif" />

<br>

<hr>


<br>

<hr>

```c
int *prt;

ptr = malloc(5 * sizeof(int));

ptr = realloc(ptr, 2 * sizeof(int));
ptr = realloc(ptr, 6 * sizeof(int));
    
```

<img src="https://github.com/YoungHaKim7/c_project/blob/main/algorithm/images/test3.gif" />


<br>

<hr>


<img src="https://github.com/YoungHaKim7/c_project/blob/main/algorithm/images/test4.gif" />

<br>

<hr>

<img src="https://github.com/YoungHaKim7/c_project/blob/main/algorithm/images/test5.gif" />

<br>

<hr>




https://log2base2.com/

# Introduction to Programming and Data Structures

https://youtu.be/4OGMB4Fhh50


# C Programming & Data Structrues(Series)

https://youtube.com/playlist?list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM

## C Programming

C Programming:
1) Introduction to the course.
2) Variables 
3) Global vs Local variables. 
4) Data types  
5) Operators in C  
6) Conditionals and loops 
7) Functions 
8) Recursion  
9) Pointers and arrays 
10) Strings
11) Structure and union 
12) File Handling

Data Structures:
1) Stacks  
2) Queues  
3) Linked list 
4) Trees  
5) Binary search trees  
6) Binary Heaps  
7) Graphs  
8) Tree Traversals  
 
X - X - X

<br>

<hr>

<br>

# c언어로 만든 싱글 링크드 리스트 linked list ( 추가, 삽입 , 삭제) 백지부터 설명 시작

https://youtu.be/3ZdafcIvREw

<br>

<hr>

# [📌연결 리스트 완전 정복 10] 이중 연결 리스트(doubly linked list) 역순 연결

<br>

https://youtu.be/bWJma-gywpQ


