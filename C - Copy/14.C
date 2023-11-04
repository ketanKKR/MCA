#include <stdio.h>
#include <conio.h>

void main(){
	double hourlyRate,hourWork,weeklyPay;
	clrscr();

	printf("Enter Hourly Pay: ");
	scanf("%lf",&hourlyRate);
	printf("Enter Total Hour Worked in This Week: ");
	scanf("%lf",&hourWork);

	weeklyPay = hourlyRate * hourWork;

	printf("Total Weekly Pay is: %.2lf",weeklyPay);
	getch();
}