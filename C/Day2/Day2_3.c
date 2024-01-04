#include <stdio.h>
#include <conio.h>

void main(){
    float num1,num2;
    clrscr();
    printf("Enter First Number: ");
    scanf("%f",&num1);
    printf("Enter Secound Number: ");
    scanf("%f",&num2);

    printf("\n%.2f + %.2f = %.2f",num1,num2,num1+num2);
    printf("\n%.2f - %.2f = %.2f",num1,num2,num1-num2);
    printf("\n%.2f x %.2f = %.2f",num1,num2,num1*num2);
    printf("\n%.2f / %.2f = %.2f",num1,num2,num1/num2);
    getch();
}