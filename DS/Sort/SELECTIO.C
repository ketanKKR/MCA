#include<stdio.h>
#include<conio.h>

int selectionSort(int a[], int n){
	int temp,i,j,min_pos;


	for(i=0;i<n;i++){
		min_pos=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}

		temp=a[i];
		a[i]=a[min_pos];
		a[min_pos]=temp;
	}
	printf("Sorted Elements in ascending order\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++){
		min_pos=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[min_pos]){
				min_pos=j;
			}
		}

		temp=a[i];
		a[i]=a[min_pos];
		a[min_pos]=temp;
	}
	printf("Sorted Elements in descending order\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return;

}
void main(){
	int n,i,a[50];
	clrscr();

	printf("Enter the size of elements: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&a[i]);
	}


	selectionSort(a,n);

	getch();
}