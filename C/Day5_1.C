#include <stdio.h>
#include <conio.h>

void main(){
	float marks;
	clrscr();
	printf("Enter Number: ");
	scanf("%f",&marks);

	if(marks>=80 && marks<=100){
		printf("\nDistiction");
	}else if(marks>=60 && marks <=79){
		printf("\nFirst Class");
	}else if(marks>=35 && marks <=59){
		printf("\nSecond Class");
	}else{
		printf("\nFail");
	}

	getch();
}