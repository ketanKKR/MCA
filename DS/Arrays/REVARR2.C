#include<stdio.h>
#include<conio.h>

void Reverse(int a[], int n);


void main(){
	int a[50],i,n;
	clrscr();

	printf("Enter size of array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter %d value: ",i+1);
		scanf("%d",&a[i]);
	}
	Reverse(a,n);
	getch();
}

void Reverse(int a[], int n){
	int i,j,temp;

	printf("Reverse of array\n");
	for(i=n-1,j=0;i>=n/2;i--,j++){
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
		 printf("\n%d",a[i]);
	}
	printf("\nAfter Reverse: \n");

	for(i=0;i<n;i++){

	}
}