#include <stdio.h>
#include <conio.h>

int main(){
	float price;
	int intPrice;
	clrscr();
	printf("Enter Price: ");
	scanf("%f",&price);

	intPrice = (int) (price * 100);
	printf("%d",intPrice);

	getch();
	return 0;
}