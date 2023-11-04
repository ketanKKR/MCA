#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	char ope;
	clrscr();

	printf("\nEnter No.1 : ");
	scanf("%d",&num1);
	printf("\nEnter No.2 : ");
	scanf("%d",&num2);
	printf("\nEnter Operator (+,-,*,/) : ");
	scanf(" %c",&ope);

	if(ope=='+'){
		printf("\nAddition : %d + %d = %d",num1,num2,num1+num2);
	}
	else if(ope=='_'){
		printf("\nSubtraction : %d - %d = %d",num1,num2,num1-num2);
	}
	else if(ope=='*'){
		printf("\nSubtraction : %d * %d = %d",num1,num2,num1*num2);
	}
	else if(ope=='/'){
		printf("\nSubtraction : %d / %d = %d",num1,num2,num1/num2);
	}
	else{
		printf("\nInvalid Operator");
	}
	getch();
	return 0;
}