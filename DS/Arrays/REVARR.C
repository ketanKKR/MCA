#include<stdio.h>
#include<conio.h>

void Reverse(int a[], int b[], int n);


void main(){
	int a[50], b[50],i,n;
	clrscr();

	printf("Enter size of array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter %d value: ",i+1);
		scanf("%d",&a[i]);
	}
	Reverse(a,b,n);
	getch();
}

void Reverse(int a[], int b[], int n){
	int i,j;

	printf("Reverse of array\n");
	for(i=n-1,j=0;i>=0;i--,j++){
		b[j]=a[i];
		printf("%d\n",b[j]);
	}
}