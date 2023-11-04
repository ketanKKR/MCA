#include <stdio.h>
#include <conio.h>

void main(){
    int num = 0,i;
    clrscr();
    printf("Enter Number: ");
    scanf("%d",&num);

    for(i=1; i<=10; i++){
        printf("\n%d X %d: %d",num,i,num*i);
    }

    getch();
}