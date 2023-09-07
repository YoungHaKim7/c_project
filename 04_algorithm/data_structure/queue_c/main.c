#include <stdio.h>
#define QUEUE_SIZE 5

void enqueue(int*);
void dequeue(int*);

void enqueue(int* rear){
    int data;
    
    printf("data : ");
    scanf("%d", &data);
    
    *rear = data;
}

void dequeue(int* front){
    printf("data : %d\n", *front);
}

int main(int argc, const char * argv[]) {
    int queue[QUEUE_SIZE] = {0}; //queue 크기는 int 배열 5
    int front = 0; //front,rear는 queue의 0번째 인덱스로 시작
    int rear = 0;
    int num;
    
    do{
        printf("1. enqueue 2. dequeue 3. print 4. end\n");
        scanf("%d", &num);
        
        //inqueue
        if(num == 1){
            if(rear > QUEUE_SIZE-1){
                printf("queue is full..\n");
            }else{
                enqueue(&queue[rear++]);
            }
            
        //dequeue
        }else if(num == 2){
            if(rear == front){
                printf("queue is empty..\n");
            }else{
                dequeue(&queue[front++]);
            }
            
        //print
        }else if(num == 3){
            printf("data : ");
            for(int i=0; i<QUEUE_SIZE; i++){
                printf("%d ", queue[i]);
            }
            printf("\n");
        }
        
    }while(num != 4);
    
    return 0;
}