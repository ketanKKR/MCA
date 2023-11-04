#include <stdio.h>
#include <conio.h>

void main(){
    float celsius  = 0,fahrenheit;
    printf("Enter Number: ");
    scanf("%f",&celsius);
    
    fahrenheit = 1.8*celsius+32;

    printf("%.2f Celsius To Fahrenheit Is %.2f.",celsius,fahrenheit);

    getch();
}