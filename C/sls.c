#include <stdio.h>
#include <stdlib.h>

typedef struct singlyLinkedList{
	int data;
	struct singlyLinkedList *next;
}node;

void createList(node *head);
void display(node *head);
node *insertBetween(node *head);
node *insertFirst(node *head);
node *insertLast(node *head);
int menu();

int main(){
	int ch;
	node *head;
	//clrscr();
	head=(node*)malloc(sizeof(node));

	do{
		//clrscr();
		ch=menu();

		switch(ch){
			case 1://Create list
				createList(head);
				break;

			case 2://Display
				display(head);
				//getch();
				break;

			case 3://Insert Between
				insertBetween(head);
				break;

			case 4://Inser at Firts
				head=insertFirst(head);
				break;

			case 5:
				insertLast(head);
				break;

			case 6:
				break;

			case 0:
				break;

			default:
				printf("Enter valid choice!");
				getch();
		}
	}while(ch!=0);

    return 0;
}

int menu(){
	int ch;
	printf("\n1...Create List");
	printf("\n2...Display");
	printf("\n3...Insert Between");
	printf("\n4...Insert at First");
	printf("\n5...Insert at Last");
	printf("\n0...Exit");

	printf("\n\nEnter your choice: ");
	scanf("%d",&ch);

	return ch;
}

void createList(node *head){
	node *ptr;
	int size,i;
	ptr=head;

	printf("\nHow many elements you want to enter: ");
	scanf("%d",&size);

	for(i=0; i<size; i++){
		printf("\n\nEnter value: ");
		scanf("%d",&ptr->data);
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->next=NULL;
}

void display(node *head){
	node *ptr;
	ptr=head;

	while(ptr->next!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
}

node *insertBetween(node *head){
	node *ptr,*newNode;
	int indexValue;
	ptr=head;

	printf("\nEnter Index Value: ");
	scanf("%d",&indexValue);

	while(indexValue!=ptr->data){
		ptr=ptr->next;
	}

	newNode=(node*)malloc(sizeof(node));
	printf("\nEnter value: ");
	scanf("%d",&newNode->data);

	newNode->next=ptr->next;
	ptr->next=newNode;

	return head;
}

node *insertFirst(node *head){
	node *newNode;
	newNode=(node*)malloc(sizeof(node));
	printf("\nEnter value: ");
	scanf("%d",&newNode->data);

	newNode->next=head;
	head=newNode;

	return head;
}

node *insertLast(node *head){
	node *newNode,*ptr;
	ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	newNode=(node*)malloc(sizeof(node));
	printf("\nEnter value: ");
	scanf("%d",&newNode->data);

	newNode->next=NULL;
	ptr->next=newNode;

	return head;
}