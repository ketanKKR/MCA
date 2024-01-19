#include <stdio.h>
#include <conio.h>

void main(){
	int num1,num2,i,lcm=0,j,flag=0;
	clrscr();

	printf("Enter Num1: ");
	scanf("%d",&num1);
	printf("Enter Num2: ");
	scanf("%d",&num2);

	while(lcm!=0){
		if(num1*i==num2*j){
			lcm=num1*i;
		}
	}

	printf("LCM of %d and %d is: %d",num1,num2,lcm);
	getch();
}