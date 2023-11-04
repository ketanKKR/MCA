#include <stdio.h>
#include <conio.h>

int main(){
	int num=0,factorial=0,i;

    printf("Enter Number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        factorial += i;
    }

    printf("Factorial of %d is %d",num,factorial);
	getch();
	return 0;
}