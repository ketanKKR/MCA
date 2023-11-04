#include <stdio.h>
#include <conio.h>

int main(){
	int num1,num2;
	clrscr();

	printf("Enter First Number: ");
	scanf("%d",&num1);
	printf("Enter Secound Number: ");
	scanf("%d",&num2);

	if(num1>num2){
		printf("Number %d is Grater.",num1);
	}
	if(num1<num2){
		printf("Number %d is Grater.",num2);
	}else{
		printf("Both Numbers Are equal.");
	}

	getch();
	return 0;
}