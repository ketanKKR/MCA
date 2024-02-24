#include<stdio.h>
#include<conio.h>

int MaxArr(int a[], int n){
	int i,max=0;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}

void main(){
	int a[100],n,max,i;
	clrscr();
	printf("Enter the number of elements: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\nEnter element value: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements of arrays are: \n");
	for(i=0;i<n;i++){
		printf("\n\tElements = %d",a[i]);
	}

	max=MaxArr(a,n);
	printf("\n\n\t Max of array elements = %d",max);

	getch();
}