#include<stdio.h>
#include<conio.h>

#define row 10
#define col 10

void main(){

	int a[row][col],i,j,r,c,sum=0;
	clrscr();

	printf("Enter the rows: ");
	scanf("%d",&r);
	printf("Enter the columns: ");
	scanf("%d",&c);

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum=sum+a[i][j];
		}
		printf("%d\n",sum);
		sum=0;
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum=sum+a[j][i];
		}
		printf("\n%d",sum);
		sum=0;
	}


	getch();
}