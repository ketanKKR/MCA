#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char str1[25],str2[25];
	clrscr();

	printf("Enter a Sring: ");
	gets(str1);

	strcpy(str2,str1);
	printf("\nCopied String: %s",str2);

	getch();
	return 0;
}