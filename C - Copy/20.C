#include <stdio.h>
#include <conio.h>

void main(){
	int days,month,year;
	clrscr();
	printf("Enter Days: ");
	scanf("%d",&days);
	month = days/30;
	year = days/365;
	days=days%31;
	printf("\nDays: %d",days);
	printf("\nMonth: %d",month);
	printf("\nYear: %d",year);
	getch();
}