#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char str[100];
	int strLen,i,flag=1;
	clrscr();

	printf("Enter a Sring: ");
	gets(str);

	strLen = strlen(str);
	for(i=0; i<strLen/2; i++){
		if(str[i]==str[strLen-i-1]){
			flag=1;
		}
		else{
			flag=0;
		}
	}
	if(flag==1){
		printf("String %s is Pelindrome",str);
	}
	else{
		printf("String %s is Not Pelindrome",str);
	}
	getch();
	return 0;
}