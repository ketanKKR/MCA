#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char str1[25],str2[25];
	clrscr();

	printf("Enter a Sring1: ");
	gets(str1);
	printf("Enter a Sring2: ");
	gets(str2);

	strcpy(str2,strcat(str1,str2));
	printf("\nCombined String: %s",str2);

	getch();
	return 0;
}