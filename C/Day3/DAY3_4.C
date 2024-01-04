//Day 3 Program 4
#include <stdio.h>
#include <conio.h>

int main(){
       int i = 32000;
       float f = 10.50;
       char c = 'K';
       long l = 1000000;
       short s = 32;
       double d = 320000.54;
       clrscr();

       printf("\nInt = %d",i);
       printf("\nFloat = %.2f",f);
       printf("\nChar = %c",c);
       printf("\nLong = %ld",l);
       printf("\nShort = %hu",s);
       printf("\nDouble = %.2lf",d);

       getch();
       return 0;
}