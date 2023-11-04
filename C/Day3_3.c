//Character To ASCII Value
#include <stdio.h>
#include <conio.h>

int main(){
	char character;
	clrscr();
	printf("Enter a Character: ");
	scanf("%c",&character);

	printf("ASCII Value Of Character %c is %d",character,character);

	getch();
	return 0;
}