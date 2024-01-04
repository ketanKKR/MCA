#include <stdio.h>
#include <conio.h>

int main(){
	int array[100],i,temp,j,element;
	clrscr();
	printf("\nHow Many Element you want to Enter: ");
	scanf("%d",&element);
	for(i=0; i<element; i++){
		printf("Enter Array Element%d: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\nUnsorted Array: ");
	for(i=0; i<element; i++){
		printf("%d ",array[i]);
	}

	for(i=0; i<element; i++){
		for(j=0; j<element; j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nSorted Array: ");
	for(i=0; i<element; i++){
		printf("%d ",array[i]);
	}
	getch();
	return 0;

}