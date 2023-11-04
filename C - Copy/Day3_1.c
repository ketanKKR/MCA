//Day 3 Program 1
#include <stdio.h>
#include <conio.h>

int main(){
	int basic;
	double grossPay,DA,HRA,con,med,tra;
	clrscr();
	printf("Enter Basic Salary: ");
	scanf("%d",&basic);
	DA = basic * 0.1;
	HRA = basic * 0.08;
	con = basic * 0.05;
	med = basic * 0.1;
	tra = basic * 0.05;
	grossPay = basic+DA+HRA+con+med+tra;

	printf("Gross Pay is: %.2lf",grossPay);

	getch();
	return 0;
}