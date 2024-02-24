#include<stdio.h>
#include<conio.h>

//int Linear_Search(int n,int a[],int i);
void main(){
	int i,a[50],n,flag=0;
	clrscr();

	for(i=0;i<5;i++){
		printf("Enter the element: "); 		//enter elements
		scanf("%d",a[i]);
	}

	printf("Enter the number to search: ");
	scanf("%d",&n);                          //search elemet
	//Linear_Search(n,a,i);
	for(i=0;i<5;i++){
		if(a[i]==n){
			printf("%d Found",n);
			flag=1;
			//return flag;
		}

	}
	if(flag==0){
		printf("Element not found");
	}

	getch();

}

/*int Linear_Search(int n, int a[], int i){
	int flag=0;
	for(i=0;i<n;i++){
		if(a[i]==n){
			printf("%d Found",n);
			flag=1;
			return flag;
		}

	}
	if(flag==0){
		printf("Element not found");
	}
	return;


} */