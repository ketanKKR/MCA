#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct Doubly_LL
{
	int data;
	struct Doubly_LL *next;
	struct Doubly_LL *prev;

};
typedef struct  Doubly_LL node;

void createll(node *head);
void display(node *head);
void display_back(node *head);
int count_node(node *head);
int search(node *head,int);
node * insert_first(node *head);
node * insert_last(node *head);
node * insert_between(node *head);
node * delete_first(node *head);
node * delete_between(node *head);
node * delete_last(node *head);
node * sort(node *head);


void main()
{
	int ch;
	int flag,cnt,key;
	node *head=NULL;//declare head

	clrscr();
	head=(node*)malloc(sizeof(node)); //allocate memory for head
	head->prev=NULL;
	do
	{
	printf("\n\t1.Create");
	printf("\n\t2.Traverse");
	printf("\n\t3.Count Node");
	printf("\n\t4.Search");
	printf("\n\t5.Insert First");
	printf("\n\t6.Insert Between");
	printf("\n\t7.Insert Last");
	printf("\n\t8.Delete First");
	printf("\n\t9.Delete Between");
	printf("\n\t10.Delete Last");
	printf("\n\t11. Sort");//bubble sort
	printf("\n\t0.Exit");
	printf("\n\n\tEnter your choice==>");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			createll(head);//call create fun by passing head
			display(head);
			break;
		case 2:
			printf("\n\n\tForward==>");
			display(head);
			printf("\n\n\tBackward==>");
			display_back(head);
			break;
		case 3:
			cnt=count_node(head);
			printf("\n\n\tTotal No of NODE==> %d",cnt);
			display(head);
			break;
		case 4:

			printf("\n\nEnter value u want to search==>");
			scanf("%d",&key);

			flag=search(head,key);
			if(flag)
			{
				printf("\n\n\t%d Found.",key);
			}
			else
			{
				printf("\n\n\t%d NOT Found.",key);
			}


			//display(head);
			break;

		case 5: //insert at first position
			head=insert_first(head);     //fun call
			display(head);
			break;
		case 6: //insert between after val
			head=insert_between(head);     //fun call
			display(head);
			break;

		case 7: //insert at last position
			head=insert_last(head);     //fun call
			display(head);

			break;

		case 8: //delete at first
			head=delete_first(head);
			display(head);
			break;
		case 9: //delete at between
			head=delete_between(head);
			display(head);
			break;
		case 10://delete at last
			head=delete_last(head);
			display(head);
			break;


		case 11://bubble sort
			head=sort(head);
			printf("\n\n\tAfter Sorting...\n");
			display(head);
			break;

		case 0:
			exit(0);
		default:
			printf("\n\n\tEnter proper choice...");
	}
	}while(ch!=0);

	getch();
}

void createll(node *head)
{

	int n,i;
	node *l;
	l=head;
	l->prev=NULL;
	printf("\n\n\tEnter how many node u want to create==>");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		l->next=(node*)malloc(sizeof(node)); //next node mem alloc
		l->next->prev=l; //for doubly store prev address
		l=l->next;

		printf("\n\nEnter value u want==>");//value
		scanf("%d",&l->data);


	}
	l->next=NULL;
}
void display(node *head)
{
	node *p;

	if(head->next ==NULL)
	{
		printf("\n\n\tLinked list empty...");
	}
	else
	{
	p=head;
	//printf("\n\n\n");
	do
	{
		p=p->next;
		printf("  %d ==>",p->data);

	}while(p->next != NULL);
	}
}

void display_back(node *head)
{
	node *p;

	if(head->next ==NULL)
	{
		printf("\n\n\tLinked list empty...");
	}
	else
	{
		p=head;
	  //	printf("\n\n\n");
		do
		{
			p=p->next;
		}while(p->next != NULL);
		//p Reach at last node

		do
		{
			printf(" %d --> ",p->data);
			p=p->prev;
		}while(p->prev != NULL);



	}
}




node* sort(node *head)
{
	node *i,*j;
	int tmp;

	for(i=head->next ; (i->next) != NULL ;i=i->next)
	{
		for(j=head->next ; (j->next) != NULL ;j=j->next)
		{
			if((j->data) > (j->next->data))
			{
				tmp=j->data;
				j->data=j->next->data;
				j->next->data=tmp;
			}
		}
	}
	return head;

}

node * insert_between(node *head){
	int val,flag;
	node *p,*newnode;
	printf("\n\n\tEnter value after which u want to insert==>");
	scanf("%d",&val);
	flag=search(head,val);
	if(flag==1)
	{
		//REach at node aft which u want to insert
		p=head;
		while(p->data != val)
		{
			p=p->next;
		}
	printf("\n \" %d\" ",p->data);
		/*********ready newnode *****************/
	newnode=(node*)malloc(sizeof(node));//mem alloc for new node
	printf("\n\nEnter value of new node==>");
	scanf("%d",&newnode->data);
	/*********Insert***************/
	newnode->next=p->next; //1
	newnode->prev=p; //2
	p->next->prev=newnode;//3
	p->next=newnode;//4

	printf("\n\n\t \" %d \" inserted successfully...",newnode->data);
	}
	else
	{
		printf("\n\nValue not found..");
	}
	return head;
}

node * insert_last(node *head){

	node *p;
	node *newnode;


	newnode=(node*)malloc(sizeof(node));//mem alloc for new node
	printf("\n\nEnter value of new node==>");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(head->next == NULL)//if linked list empty
	{
		head->next=newnode;
		newnode->prev=head;
	}
	else
	{
		p=head;
		while(p->next != NULL) //Reach at end
		{
			p=p->next;
		}
		printf(" \"%d\" ",p->data);

		p->next=newnode;//1
		newnode->prev=p;//2
		printf("\n\n\tNewnode inserted ....%d\n\n",newnode->data);
	}
	return head;
}


node * insert_first(node *head){

	node *newnode;
	newnode=(node*)malloc(sizeof(node));//mem alloc for new node
	printf("\n\nEnter value of new node==>");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head->next == NULL)
	{
		head->next=newnode;
		newnode->prev=head;
	}
	else
	{
		newnode->next=head->next;
		head->next->prev=newnode;
		head->next=newnode;
		newnode->prev=head;
		printf("\n\n%d inserted successfully..",newnode->data);
	}
 return head;
}
int search(node *head,int key)
{
	int flag=0;

	node *p;
	p=head;

	while(p->next != NULL)
	{
		if(p->next->data==key)
			{
			flag=1;
			break;
		}
		p=p->next;

	}
	return flag;
}
int count_node(node *head)
{
	node *p;
	int cnt=0;

	p=head;

	while(p->next != NULL)
	{
	     //	printf("  %d ==>",p->data);
	     cnt++;
		p=p->next;
	}

	return cnt;
}

node *delete_first(node *head)
{
	node *tmp;
	if(head->next==NULL)
	{
		printf("\n\n\tLinked list empty..");

	}
	else
	{
		tmp=head->next; //tmp point to 1st node
		head->next=tmp->next;
		tmp->next->prev=head;
		printf("\n\n%d node deleted successfully...",tmp->data);

		free(tmp); //delete node

	}

	return head;
}

node *delete_between(node *head)
{
	node *p,*tmp;
	int val,flag;

	printf("\n\n\tEnter value u want to delete==>");
	scanf("%d",&val);

	flag=search(head,val);
	if(flag)
	{

		p=head;
		while(p->next->data != val)//always stay 1 level before delete
		{
			p=p->next;
		}
		printf("\n \"%d\" ",p->data);

		tmp=p->next;
		p->next=tmp->next;
		tmp->next->prev=p;
		printf("\n\n\t%d deleted successfully...",tmp->data);
		free(tmp);

	}
	else
	{
		printf("\n\n\t %d NOT Found...",val);
	}
	return head;
}

node *delete_last(node *head)
{

	return head;
}