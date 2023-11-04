#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char str[100],revStr[100];
	int strLen,i,result;
	//clrscr();

	printf("Enter a Sring: ");
	gets(str);

	strLen = strlen(str);
	for(i=0; i<strLen; i++){
		revStr[i] = str[strLen-i-1];
	}
    result = strcmp(str,revStr);
	if(result==0){
        printf("String %s is Pelindrome",str);
    }
    else{
        printf("String %s is Not Pelindrome",str);
    }
	getch();
	return 0;
}