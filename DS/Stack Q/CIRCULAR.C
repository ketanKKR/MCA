#include<stdio.h>
#include<conio.h>

#define size 5

int Queue[size];
int Front=-1;
int Rear=-1;

void Insert(){
	int value;
	printf("\n\nEnter the value to insert: ");
	scanf("%d",&value);

	if(Front==0 && Rear==size-1){
		printf("\nOverflow");
	}
	else if(Rear==Front-1){       	   //front=rear+1     /circular q
		printf("\nOverflow");
	}
	else if(Front==-1){              //queue empty
		Front=0;
		Rear=0;
		Queue[Rear]=value;
	}
	else if(Rear==size-1){ 		//last index
		Rear=0;
		Queue[Rear]=value;
	}
	else{
		Rear++;
		Queue[Rear]=value;
	}
}

void Display(){
	int i;
	printf("\n\nFront: %d",Front);
	printf("\n\nRear: %d",Rear);

	if(Front==-1){
		printf("\nQueue is empty");
	}
	if(Rear>=Front){
		for(i=Front;i<=Rear;i++){
			printf("\n%d",Queue[i]);
		}
	}
	else{
		for(i=Front;i<=size-1;i++){
			printf("\n%d",Queue[i]);
		}
		for(i=0;i<=Rear;i++){
			printf("\n%d",Queue[i]);
		}
	/*else{
		printf("\nElements: ");
		for(i=Front;i<=Rear;i++){
			printf("%d ,",Queue[i]);
		}
	}*/
	}
}

void Delete(){
	if(Front==-1 && Rear==-1){
		printf("\n\nQueue is empty.");
	}
	printf("\n%d Deleted Successfully\n",Queue[Front]);
	if(Front==Rear){
		Front=-1;
		Rear=-1;
	}
	else if(Front==size-1){
		Front=0;
	}
	else{
	//	printf("\n%d Deleted Successfully\n",Queue[Front]);
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