#include <stdio.h>
#include <conio.h>

int main(){
	int i=0,j=0,rows,cols,array[100][100];
	clrscr();
	printf("Enter Rows of Array: ");
	scanf("%d",&rows);
	printf("Enter Columns of Array: ");
	scanf("%d",&cols);
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("Enter Element[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}

	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}