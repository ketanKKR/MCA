#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int num=0,sum=0,numlen,i;
    char strnum[20];
    clrscr();

    printf("Enter Number: ");
    scanf("%d",&num);

    sprintf(strnum, "%d", num);
    numlen=strlen(strnum);
    printf("\nSum of Digit ");
    for(i=0; i<numlen; i++){
        sum += strnum[i]-'0';
        if(i<numlen-1){
            printf("%c+",strnum[i]);
        }
    }
    printf("%c=%d",strnum[numlen-1],sum);

	getch();
	return 0;
}