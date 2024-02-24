#include<stdio.h>
#include<conio.h>
#define size 5
int Queue[size];
int Front=-1;
int Rear=-1;

void Insert(){
	int value;
	if(Rear == size-1){
		printf("\nQueue is Full");
	}
	else{
		if(Front==-1){
			Front=0;
		}
		Rear++;
		printf("\n\nEnter the value to insert: ");
		scanf("%d",&value);
		Queue[Rear]=value;
	}
}

void Display(){
	int i;
	if(Front==size-1 && Rear==size-1){
		printf("\n\nQueue is empty.");
	}
	else{
		printf("\nElements: ");
		for(i=Front;i<=Rear;i++){
			printf("%d ,",Queue[i]);
		}
	}
}

void Delete(){
	if(Front==size-1 && Rear==size-1){
		printf("\n\nQueue is empty.");
	}
	else if(Front==Rear){
		Front=-1;
		Rear=-1;
	}
	else{
		printf("\n%d Deleted Successfully\n",Queue[Front]);
		Front++;
	}
}

void main(){
	int choice;
	clrscr();

	do{
		printf("\n1.Insert");
		printf("\n2.Display");
		printf("\n3.Delete");
		printf("\n0.Exit");

		printf("\n\nEnter the choice: ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				clrscr();
				Insert();
				break;
			case 2:
				clrscr();
				Display();
				break;
			case 3:
				clrscr();
				Delete();
				break;
			case 0:
				exit(0);
				break;
			default:
				printf("\nEnter the valid choice.");
			}
	}
	while(choice!=0);
	getch();
}