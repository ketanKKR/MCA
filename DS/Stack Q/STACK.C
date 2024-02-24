#include<stdio.h>
#include<conio.h>

#define size 5
int stack[size];
int top =-1;

void push(){
	int value;
	if(top == size-1){
		printf("Stack overflow");
	}
	else{
		printf("\nEnter value: ");
		scanf("%d",&value);
		top++;
		stack[top]=value;
	}
}

void display(){
	int i;
	if(top==-1){
		printf("Stack is empty");
	}
	else{
		for(i=top;i>=0;i--){
			printf("\n%d",stack[i]);
		}
	}
}

void peep(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("\n%dth position",top+1);
	}
}

void pop(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("\n%d Deleted Successfully\n",stack[top]);
		top--;
	}

}

void main(){
	int choice;

	clrscr();
	do{
//	clrscr();
		printf("\n\n1.Push\n");
		printf("2.Peep/Peak\n");
		printf("3.Pop\n");
		printf("4.Display\n");
		printf("0.Exit\n");

		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				clrscr();
				push();
				break;
			case 2:
				clrscr();
				peep();
				break;
			case 3:
				clrscr();
				pop();
				break;
			case 4:
				clrscr();
				display();
				break;
			case 0:
				exit(0);
				break;
			default:
				clrscr();
				printf("Enter the right choice..");
				break;

		}

	}
	while(choice!=0);

	getch();
}