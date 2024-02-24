#include<stdio.h>
#include<conio.h>
void menu();
void create(int []);
void insert(int [],int);
void deletion(int [],int);
void display(int []);
void main()
	{
	int heap[32],ch,item;
	clrscr();
	menu();

	scanf("%d",&ch);
	while(1)
		{
		switch(ch)
			{
			case 1:
				create(heap);
				break;
			case 2:
				printf("\nEnter an Element to Insert:");
				scanf("%d",&item);
				insert(heap,item);
				break;
			case 3:
				printf("\nEnter an Element to Delete:");
				scanf("%d",&item);
				deletion(heap,item);
				break;
			case 4:
				display(heap);
				break;
			case 0:
				getch();
				exit(1);
			default:
				printf("\nPlease enter correct choice.");
			}
		menu();
		scanf("%d",&ch);
		}
	}
void menu()
	{
	printf("\n::Menu::");
	printf("\n1. Create Heap Tree.");
	printf("\n2. Insert into Heap Tree.");
	printf("\n3. Delete from Heap Tree.");
	printf("\n4. Display Heap Tree.");
	printf("\n0. Exit.");
	printf("\nEnter your choice:");
	}
void create(int heap[32])
	{
	int i;
	heap[0]=0;
	printf("\nEnter Element to be inserted (Enter -999 to end)::");
	scanf("%d",&i);
	while(i!=-999)
		{
		insert(heap,i);
		printf("\nEnter Element to be inserted (Enter -999 to end)::");
		scanf("%d",&i);
		}
	}
void insert(int heap[32],int item)
	{
	int noofitems,currentpos,parentpos,temp;
	heap[0]=heap[0]+1;
	noofitems=heap[0];
	heap[noofitems]=item;
	currentpos=noofitems;
	parentpos=currentpos/2;
	while(parentpos!=0)
		{
		if(heap[parentpos]<heap[currentpos])
			{
			temp=heap[currentpos];
			heap[currentpos]=heap[parentpos];
			heap[parentpos]=temp;
			}
		currentpos=parentpos;
		parentpos=currentpos/2;
		}
	}
void deletion(int heap[32],int item)
{
	int pos,i,currentpos,lchildpos,rchildpos,temp,flag=0;
	for(i=1;i<=heap[0];i++)
		{
		if(heap[i]==item)
			{
			flag=1;
			pos=i;
			break;
			}
		}
	if(flag==0)
		printf("\nElement to be deleted not found.");
	else
	{
	heap[pos]=heap[heap[0]];
	heap[0]=heap[0]-1;
	currentpos=pos;

	while(currentpos<=heap[0])
		{
		lchildpos=currentpos*2;
		if(lchildpos>heap[0])
			lchildpos=0;
		rchildpos=(currentpos*2)+1;
		if(rchildpos>heap[0])
			rchildpos=0;
		if(((lchildpos!=0 && rchildpos==0) || heap[lchildpos]>heap[rchildpos])
		 && (heap[lchildpos]>heap[currentpos]))
			{
			temp=heap[currentpos];
			heap[currentpos]=heap[lchildpos];
			heap[lchildpos]=temp;
			currentpos=lchildpos;
			}
		else if(((rchildpos!=0 && lchildpos==0) || heap[rchildpos]>heap[lchildpos])
		 && (heap[rchildpos]>heap[currentpos]))
			{
			temp=heap[currentpos];
			heap[currentpos]=heap[rchildpos];
			heap[rchildpos]=temp;
			currentpos=rchildpos;
			}
		 else
			break;
		}
	}
}
void display(int heap[32])
	{
	int i;
	for(i=0;i<=heap[0];i++)
		printf("%d, ",heap[i]);
	}