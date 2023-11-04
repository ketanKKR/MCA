#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char str1[100],str2[100];
	int result;
	clrscr();

	printf("Enter a Sring1: ");
	gets(str1);
	printf("Enter a Sring2: ");
	gets(str2);

	result = strcmp(str1,str2);
	if(result==0){
		printf("Both String are Same.");
	}
	else{
		printf("Both String is not the Same");
	}
	getch();
	return 0;
}