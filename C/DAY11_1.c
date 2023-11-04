#include <stdio.h>
#include <conio.h>

int main(){
	int i=0,j=0,matrix1[3][3],matrix2[3][3],index=1;
	clrscr();
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter Element[%d][%d] for Matrix1: ",i,j,index);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter Element[%d][%d] for Matrix2: ",i,j,index);
			scanf("%d",&matrix2[i][j]);
		}
	}

	printf("\nMatrix1\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",matrix1[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix2:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",matrix2[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}