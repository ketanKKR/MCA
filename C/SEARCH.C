#include <stdio.h>
#include <conio.h>

int main(){
	int array[5],i,search,found=0,index[5]={-1,-1,-1,-1,-1};
	//clrscr();
	for(i=0; i<5; i++){
		printf("Enter Array Element%d: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\nArray: ");
	for(i=0; i<5; i++){
		printf("%d ",array[i]);
	}

	printf("\nEnter Element You want to shearch: ");
	scanf("%d",&search);
	for(i=0; i<5; i++){
		if(array[i]==search){
			found = 1;
			index[i]=i;
		}
	}
	if(found==1){
		printf("Element %d Found on Index: ",search);
		for(i=0; i<5; i++){
			if(index[i]!=-1){
				printf("%d ",index[i]);
			}
		}
	}
	else{
		printf("Element %d Notfound.",search);
	}
	getch();
	return 0;

}