#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int size;
int list[maxsize];
void Create(int list[])
{
    int i;
    printf("enter the size of list : ");
    scanf("%d",&size);
    if(size>maxsize)
    {
        printf(" List Over flow !!!!!\n\n");
    }
    else{
        printf("enter list elements : ");
        for(i=0;i<size;i++){
            scanf("%d",&list[i]);
        }
    }
}
void insert(int list[])
{
    if(size==0){
        printf("list is empty");
    }
    else{
        int pos,value;
        printf("enter position");
        scanf("%d",&pos);
        printf("enter the value to insert");
        scanf("%d",&value);
        if(pos<size){
            int i;
            for(i=size;i>=pos;i--)
                list[i]=list[i-1];
            list[pos-1]=value;
            size++;
            printf("inserted successfully\n");
        }
        else{
            printf("invalid position!!!!!\n\n");
        }
    }
}
void delete(int list[]){
    if(size==0){
        printf("list is empty");
    }
    else{
        int pos,i;
        printf("enter the position: ");
        scanf("%d",&pos);
        if(pos>0 && pos<=size){
            for(i=pos-1;i<size;i++)
                list[i]=list[i+1];
            size--;
            printf("element deleted!!!");
        }
        else{
            printf("invalid position!!!\n");
        }
    }
}
void search(int list[]){
    if(size==0){
        printf("list is empty\n");
    }
    else{
        int val,i;
        printf("Enter value to be searched : ");
        scanf("%d",&val);
        for(i=0;i<size;i++){
            if(list[i]==val){
                break;
            }
        }
        if(i==size){
            printf("element not found!!!");
        }
        else{
            printf("elemen found!!!");
        }
    }
}
void display(int list[])
{
    if(size==0){
        printf("List is empty \n");
    }
    printf("List elements are : ");
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",list[i]);
    }
}
int main(){
    Create(list[maxsize]);
    insert(list[maxsize]);
    display(list[maxsize]);
    delete(list[maxsize]);
    display(list[maxsize]);
    search(list[maxsize]);
    exit(list[maxsize]);
    return 0;
}
