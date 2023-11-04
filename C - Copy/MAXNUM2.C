#include <stdio.h>
#include <conio.h>

int main(){
	int num1,num2,num3;
	clrscr();

	printf("Enter First Number: ");
	scanf("%d",&num1);
	printf("Enter Secound Number: ");
	scanf("%d",&num2);
	printf("Enter Third Number: ");
	scanf("%d",&num3);

	if(num1>num2 && num1>num3){
		printf("Number %d is Grater.",num1);
	}else if(num2>num1 && num2>num3){
		printf("Number %d is Grater.",num2);
	}else if(num3>num1 && num3>num2){
		printf("Number %d is Grater.",num3);
	}else{
		printf("All Numbers Are equal.");
	}

	getch();
	return 0;
}