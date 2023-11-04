//Day 6 Program 1
#include <stdio.h>
#include <conio.h>

void main(){
	float num1,num2;
	char operators;
	clrscr();

	printf("Enter First Number: ");
	scanf("%f",&num1);
	printf("Enter Second Number: ");
	scanf("%f",&num2);
	printf("Enter Opeartor: ");
	scanf("%*c");
	scanf("%c",&operators);

	switch(operators){
		case '+':
			printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
			break;

		case '-':
			printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
			break;

		case '/':
			printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
			break;

		case '*':
			printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
			break;

		default:
			printf("Enter a Valid Operator!");
			break;
	}
	getch();
}