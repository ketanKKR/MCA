#include<stdio.h>
#include<conio.h>

typedef struct stack{
	 int data;
	 struct stack *next;
}node;

node *push(node*);
node *pop(node*);
void print(node*);
void peep(node*);
void change(node*);

void menu(){
	int ch;
	node *top=NULL;
	do{
		printf("\t\t\t1....Push\n");
		printf("\t\t\t2....Print\n");
		printf("\t\t\t3....Pop\n");
		printf("\t\t\t4....Peep\n");
		printf("\t\t\t5....Change\n");
		printf("\t\t\t0....Exit\n\n");

		printf("\t\t\tEnter the choice: ");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				clrscr();
				top=push(top);
				print(top);
				break;
			case 2:
				clrscr();
				print(top);
				break;
			case 3:
				clrscr();
				top=pop(top);
				break;
			case 4:
				clrscr();
				peep(top);
				break;
			case 5:
				clrscr();
				change(top);
				break;
			case 0:
				exit(0);
			default:
				clrscr();
				printf("\nEnter the valid choice");
				break;

		}
	}
	while(ch!=0);
}

void main(){
	clrscr();
	menu();
	getch();
}

node *push(node *top){
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the value to push: ");
	scanf("%d",&newnode->data);

	if(top==NULL){
		top=newnode;
		newnode->next=NULL;
	}
	else{
		newnode->next=top;   //new node point to top
		top=newnode;         //top points newnode
	}
	printf("\nValue %d pushed\n",newnode->data);


	return top;
}

void print(node *top){
	node *p;
	p=top;

	if(top==NULL){
		printf("List is Empty");
	}
	else{
		while(p!=NULL){
			printf("\n\t%d\n",p->data);
			p=p->next;
		}
	}
}

node *pop(node *top){
	node *temp;

	if(top==NULL){
		printf("List is Empty\n Try adding values");
	}
	else{
		temp=top;
		top=top->next;
		free(temp);
		printf("%d is Deleted\n",temp->data);
	}
	return top;
}

void peep(node *top){
	int pos,i;
	node *p=top;
	printf("Enter the position: ");
	scanf("%d",&pos);

	for(i=1;i<pos;i++){
		if(p->next==NULL){
			printf("\nValue %d not found",pos);
			return;
		}
		else{
			p=p->next;
		}
	}
	printf("\n%d is at %d position",p->data,pos);
}

void change(node *top){
	int pos,i;
	node *p=top;
	printf("Enter the position: ");
	scanf("%d",&pos);

	for(i=1;i<pos;i++){
		if(p->next==NULL){
			printf("\nValue %d not found",pos);
			return;
		}
		else{
			p=p->next;
		}
	}
	printf("\nEnter to change the value: ");
	scanf("%d",&p->data);
	printf("\n%d changed at %d\n",p->data,pos);

}
