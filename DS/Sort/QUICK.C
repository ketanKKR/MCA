#include<stdio.h>
#include<conio.h>

void quickSort(int a[] ,int first, int last){
	int temp,pivot,i,j;
	if(first<last){
		pivot=first;
		i=first;
		j=last;

	while(i<j){
		while(a[i] <= a[pivot] && i < last){
			i++;
		}
		while(a[j] > a[pivot] && j > first){
			j--;
		}
		if(i<j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	temp = a[pivot];
	a[pivot] = a[j];
	a[j]=temp;

	quickSort(a,first,j-1);
	quickSort(a,j+1,last);

	}

}

void main(){
	int a[50],n,i;
	clrscr();

	printf("Enter the length for array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
	       printf("Enter the elements: ");
	       scanf("%d",&a[i]);
	}

	quickSort(a,0,n-1);

	printf("\nSorted Array: \n");

	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

	getch();
}