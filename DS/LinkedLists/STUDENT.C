//singly linklist

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

typedef struct Singly_student{
	int data;
	struct Singly_student *next;
}node;

void CreateStudent(node *head);
void DisplayStudent(node *head);

void main(){
	int ch;
	node *head;
	clrscr();
	head=(node*)malloc(sizeof(node));

	do{
		printf("\n1..Create");
		printf("\n2..Display");
		printf("\n0..Exit");

		printf("\n\nEnter the choice: ");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				clrscr();
				CreateStudent(head);
				break;

			case 2:
				clrscr();
				DisplayStudent(head);
				break;

			case 0:
				exit(0);

			default:
				clrscr();
				printf("Enter the right choice");
				break;
		}

	}
	while(ch!=0);

	getch();
}

void CreateStudent(node *head){
	node *l;   //declare of type node
	int n,i;

	l=head;    //l store the address of head
	printf("\n\nEnter number of nodes to create: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		printf("\nEnter the value: ");
		scanf("%d",&l->data);
		//printf("

		l->next=(node*)malloc(sizeof(node));  //allocate memory for next no
		l=l->next;	//jump to the next node
	}
	l->next=NULL;
}

void DisplayStudent(node *head){
	node *P;
	P=head;

	while(P->next != NULL){
		printf("%d -->",P->data);
		P=P->next;             //jump to the next node
	}

}