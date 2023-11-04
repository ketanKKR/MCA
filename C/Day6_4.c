#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int num=0,numLen,i=0;
    char strNum[20],reverseNum[20]="1";

    printf("Enter Number: ");
    scanf("%d",&num);

    sprintf(strNum, "%d", num);
    numLen=strlen(strNum);
    
    
    for(i=0; i<numLen; i++){
       reverseNum[i] = strNum[numLen - i - 1];
    }
    printf("Reverse Number: %s",reverseNum);

	getch();
	return 0;
}