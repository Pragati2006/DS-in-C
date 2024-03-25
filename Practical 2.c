#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[10];
int top=-1;
int isEmpty(){
    return (top==-1)?1:0;
}
int isFull(){
    return (top==size-1)?1:0;
}
void push(){
    int item;
    if(isFull()){
        printf("Stack Overflow!!!!\n");
        exit(0);
    }
    else{
        printf("Enter the value you want to push to the stack: ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
int pop(){
    int val;
    if(isEmpty()){
        printf("stack underflow!!!!");
    }
    else{
        val=stack[top];
        top=top-1;
        printf("value %d is removed from the stack\n",val);
    }
}
void show(){
    if(isEmpty()){
        printf("Stack is empty...\n");
    }
    else{
        int i;
        printf("elements in the stack: \n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    push();
    push();
    push();
    show();
    pop();
     printf("\n");
    show();
    return 0;
}
