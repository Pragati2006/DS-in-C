#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int queue[MAX],front=-1,rear=-1;
int isfull(){
    return rear=MAX-1;
}
int isempty(){
    return front = -1;
}
void enqueue(int value){
    if(isfull()){
        printf("Queue Overflow!!!\n");
    }
    else{
        queue[++rear]=value;//Add the 'value' to the next available position in the queue.
        if(front==-1){
            front=rear;
        }
        printf("%d added in the queue!!!!\n",value);
    }
}
void dequeue(){
    if(isempty()){
        printf("queue underflow!!!\n");
    }
    else{
        int value=queue[front++];
        if(front >rear){
            front=rear-1;
        }
        printf("%d removed from the queue!!!\n",value);
    }
}
int peek(){
    if(isempty()||front>rear){
        return -1;
    }
    else{
        return queue[front];
    }
}
void display(){
    int i;
    if(isempty){
        printf("queue is empty!!\n");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
    }
}
int main(){
    int choice,val;
    while(1){
        system("cls");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter the value: ");
                scanf("%d",&val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                val=peek();
                if(val==-1){
                    printf("Queue is Empty.\n");
                }
                else{
                    printf("%d is available in front of queue!!!!",val);
                    break;
                }
            case 4:
                display();
            case 5:
                exit(0);
                break;
            default:
                printf("invalid choice!!!\n");
        }
        printf("\n");
        system("pause");
    }
    return 0;
}
