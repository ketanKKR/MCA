#include <stdio.h>
#include <conio.h>

int num;

void oddEven(int num){
	if(num%2==0){
		printf("Number is Even");
	}
	else{
		printf("Number id Odd");
	}
}

void main(){
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);

	oddEven(num);
	getch();
}