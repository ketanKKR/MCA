#include <stdio.h>
#include <conio.h>
void main(){
    int x,a,b,c;
    clrscr();
    a=2;
    b=4;
    c=5;
    x = a-- + b++ - ++c;
    printf(“x:%d”,x); //x=0 because of the combination of post-decrement, post-increment, and pre-increment operators used in the expression.
    getch();
}