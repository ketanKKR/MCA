#include <stdio.h>
#include <conio.h>

int main(){
    int i,j,num=1;
    clrscr();
    for(i=0; i<=5; i++){
        num=1;
        for(j=0; j<i; j++){
            printf("%d ",num*num);
            num++;
        }
        printf("\n");
    }

    getch();
    return 0;
}