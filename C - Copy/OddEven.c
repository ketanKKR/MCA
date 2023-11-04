#include <stdio.h>
#include <conio.h>

void main(){
	int num;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);

	if(num%2==0){
		printf("\n%d Is a Even Number",num);
	}else{
		printf("\n%d Is a Odd Number",num);
	}

	getch();
}