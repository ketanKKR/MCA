#include <stdio.h>
#include <conio.h>

int main(){
	int a=5,b=3;
    float c;
	clrscr();

    c = (float)a/(float)b;
    printf("%.2f",c);

	getch();
	return 0;
}