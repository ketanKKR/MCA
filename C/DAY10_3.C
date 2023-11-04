#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char str[100];
	int strLen;
	clrscr();

	printf("Enter a Sring: ");
	gets(str);

	strLen = strlen(str);
	printf("\nLength of %s is: %d",str,strLen);

	getch();
	return 0;
}