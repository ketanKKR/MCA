#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char str[100],revStr[100];
	int strLen,i;
	clrscr();

	printf("Enter a Sring: ");
	gets(str);

	strLen = strlen(str);
	for(i=0; i<strLen; i++){
		revStr[i] = str[strLen-i-1];
	}
	revStr[i]='\0';
	printf("\nYour String: %s",str);
	printf("\nReverse String: %s",revStr);

	getch();
	return 0;
}