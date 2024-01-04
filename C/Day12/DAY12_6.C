#include <stdio.h>
#include <conio.h>

int i;

void array(int a[8]);

void main(){
	int a[8]={1,2,3,4,5,6,7,8},search;
	clrscr();
	printf("Enter Num: ");
	scanf("%d",&search);
	array(a);
	getch();
}

void array(int a1[8],int search){
	for(i=0; i<8; i++){
		if(a1[i]==search){
			printf("Element Found!");
		}
		else{
			printf("Element Not Found!");
		}
	}
}