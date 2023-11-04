#include <stdio.h>
#include <conio.h>

void array(int x[]);

void main(){
	int x[5]={1,2,3,4,5};
	clrscr();
	array(x);
	getch();
}

void array(int y[]){
	printf("%d",y[]);
}