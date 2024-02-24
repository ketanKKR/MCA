#include<stdio.h>
#include<conio.h>

int Binary_Search(int a[],int n,int key); //1. fun declare

void main(){
	int a[100],n,key,i;
	char ch;

	clrscr();

	printf("\n\n\tEnter how many elements....");
	scanf("%d",&n);

	//Read array
	for(i=0;i<n;i++){
		printf("\n\n\tEnter %d value==>",i+1);
		scanf("%d",&a[i]);
	}
	//Print array
	printf("\n\n\tElements of array..\n");
	for(i=0;i<n;i++){
		printf("\n\n\t %d",a[i]);
	}
	//Binary Search
	do{
		printf("\n\n\tEnter value u want to Search==>");
		scanf("%d",&key);

		if(Binary_Search(a,n,key)){ //3. fun call
			printf("\n\n\t%d found..",key);
		}
		else{
			printf("\n\n\t%d NOT found..",key);
		}

		printf("\n\n\tDo u want to search again[Y/N] ==>");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');

	getch();
}

int Binary_Search(int a[],int n,int key){ //2. fun define
	int flag=0;
	int l,u,mid;
	l=0;
	u=n-1;
	mid=(l+u)/2;

	while(l<=u && a[mid]!=key){
		if(a[mid]>key){
			u=mid-1;
		}
		else{
		    l=mid+1;
		}
		mid=(l+u)/2;
	}
	if(a[mid]==key)
		flag=1;
	else
		flag=0;

	return flag;
}