//Area Of Circle
#include <stdio.h>
#include <conio.h>
#include <math.h>

double radius,area;

double areaOfCircle(double radius){
	area = M_PI * pow(radius, 2);
	return area;
}

int main() {
	clrscr();
	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);

	printf("The area of the circle with radius %.2lf is %.2lf\n", radius, areaOfCircle(radius));

	getch();
	return 0;
}