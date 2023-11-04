#include <stdio.h>
#include <conio.h>

int main(){
    int x=5,y=8;
    clrscr();
    x = x+y;
    y = x-y;
    x = x-y;

    printf("%d %d",x,y);

    getch();
    return 0;
}