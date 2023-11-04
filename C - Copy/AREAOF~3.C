//Day 3 Program 2
#include <stdio.h>
#include <conio.h>

int main(){
	float l,b,area;
	clrscr();
	printf("Enter Length of Trangle: ");
	scanf("%f",&l);
	printf("Enter Base of Trangle: ");
	scanf("%f",&b);

	area = (l*b)/2;

	printf("Area of Tringle is: %.2f",area);
	getch();
	return 0;
}