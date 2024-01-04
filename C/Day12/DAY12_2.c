#include <stdio.h>
#include <conio.h>

int num1,num2,num3;

void maxNum(int num1,int num2,int num3){
	if(num1>num2 && num1>num3){
		printf("Num1 Is Max.");
	}
	else if(num2>num1 && num2>num3){
		printf("Num2 Is Max.");
	}
	else{
		printf("Num3 Is Max.");
	}
}

int main(){
	clrscr();
	printf("Entre Num1: ");
	scanf("%d",&num1);
	printf("Entre Num2: ");
	scanf("%d",&num2);
	printf("Entre Num3: ");
	scanf("%d",&num3);

	maxNum(num1,num2,num3);
	getch();
	return 0;
}