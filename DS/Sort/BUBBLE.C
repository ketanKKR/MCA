#include<stdio.h>
#include<conio.h>

int bubbleSort(int a[], int n){
	int temp,j,i;

	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Elements\n");
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

	bubbleSort(a,n);

	getch();
}