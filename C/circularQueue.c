#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 5

int queue[SIZE],front=-1,rear=-1,count=0;

void inQueue(){
    int num;
    if(front<rear || (front==-1 && rear==-1) || rear==front){
        if(rear==SIZE-1 && front==0){
            printf("\nOverflow!");
        }
        else{
            printf("\nEnter Value: ");
            scanf("%d",&num);
            if(front==-1)
                front=0;
            if(rear==SIZE-1 && front>0)
                rear=-1;
            rear++;
            count++;
            queue[rear]=num;
        }
    }
    else{
        if(rear==front-1){
            printf("\nOverflow!");
        }
        else{
            printf("\nEnter Value: ");
            scanf("%d",&num);
            rear++;
            count++;
            queue[rear]=num;
        }
    }
}

void deQueue(){
    if(front==-1 && rear==-1){
        printf("\nQueue is Empty!");
        return;
    }
    if(front<rear || rear==front){
        front++;
        count--;
        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
    else{
        front++;
        count--;
        if(front==SIZE)
            front=0;
    }
}

void display(){
    int i,index;
    if(rear==-1 && front==-1){
        printf("\nQueue is Empty!");
        return;
    }
    if(front<rear || rear==front){
        printf("\nQueue:");
        for(i=front; i<=rear; i++){
            printf("%5d",queue[i]);
        }
    }
    else{
        printf("\nQueue:");
        index=front;
        for(i=0; i<count; i++){
            printf("%5d",queue[index]);
            index++;
            if(index==SIZE)
                index=0;
        }
    }
}

void menu(){
    printf("\nInsert....1");
    printf("\nDelete....2");
    printf("\nDisplay....3");
    printf("\nExit....0");
}

int main(){
    int ch;
    //clrscr();
    do{
        menu();
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);

        switch(ch){
        case 1://Insert
            inQueue();
            break;
        
        case 2://Delete
            deQueue();
            break;

        case 3://Display
            display();
            break;

        case 0://Exit
            exit(0);
            break;

        default:
            printf("\nPlease Enter Valid Choice!");
            break;
        }
    }while(ch!=0);

    //getch();
    return 0;
}