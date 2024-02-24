#include<stdio.h>
#include<conio.h>

void insertionSort(int n, int a[]){
	int i,j,temp;

	for(j=1;j<n;j++){
		i=j-1;
		temp=a[j];
		while(i>=0 && temp<a[i]){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=temp;
	}
	printf("\nSorted Array\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

}

int main(){
	int i,n,a[50];
	//clrscr();

	printf("Enter the length for array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&a[i]);
	}
	insertionSort(n,a);
	return 0;
}