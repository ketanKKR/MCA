#include<stdio.h>
#include<conio.h>

void mergeArray(int a[], int b[],int no, int no2){
int i=0,j=0,k=0,c[50];
	while(i<no && j<no2){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
			k++;
		}
		else {
			c[k]=b[j];
			j++;
			k++;
		}
	}

	while(i<no){
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<no2){
		c[k]=b[j];
		j++;
		k++;
	}
	for(i=0;i<no;i++){
		printf("%d\n",a[i]);
	}
	for(j=0;j<no2;j++){
		printf("%d\n",b[j]);
	}
	for(k=0;k<7;k++){

		printf("%d\n",c[k]);
	}
//	return 0;
}

void main(){
	int i,j,no,no2;
	int a[50],b[50];
	clrscr();

	printf("Enter the length for first array: ");
	scanf("%d",&no);

	for(i=0;i<no;i++){
		printf("Enter the array 1: ");
		scanf("%d",&a[i]);
	}
	printf("Enter the length for second array: ");
	scanf("%d",&no2);

	for(j=0;j<no2;j++){
		printf("Enter the array 2: ");
		scanf("%d",&b[j]);
	}

	mergeArray(a,b,no,no2);


	getch();
}