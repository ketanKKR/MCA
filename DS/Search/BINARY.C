#include<stdio.h>
#include<conio.h>

void binarySearch();

void main(){
	int i,n,a[50];
	int flag=0,l,u,mid;
	clrscr();

	l=0;
	u=n-1;
	mid=(l+u)/2;

	for(i=0;i<5;i++){
	printf("Enter the elements: ");   	//Enter elements
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search: ");
	scanf("%d",&n);

	while(l<=u && a[mid]!=n){
		if(a[mid]>n){
			u=mid-1;
		}
		else{
			l=mid+1;
		}
		mid=(l+u)/2;
	}
	if(a[mid]==n){
		//flag=1;
		printf("Found");
	}
	else{
		//flag=0;
		printf("Not Found");
	}

	getch();
}