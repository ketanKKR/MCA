#include <stdio.h>
#include <conio.h>

int main(){
	float num1,num2;
	char ope;
	clrscr();

	printf("Enter First Number: ");
	scanf("%f",&num1);
	printf("Enter First Number: ");
	scanf("%f",&num2);
	printf("Enter Operator(+,-,*,/): ");
	scanf("%*c");
	scanf("%c",&ope);

	switch(ope){
		case '+':
			printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
			break;

		case '-':
			printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
			break;

		case '*':
			printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
			break;

		case '/':
			printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
			break;

		default:
			printf("Enter a Valid Operator!");
			break;
	}
	getch();
	return 0;
}