#include <stdio.h>
#include <conio.h>

int main(){
	int year;
	clrscr();
	printf("Enter a Year: ");
	scanf("%d",&year);

	if(year%4==0){
		printf("%d is a Leap Year",year);
	}else{
		printf("%d is Not a Leap Year",year);
	}

	getch();
	return 0;
}