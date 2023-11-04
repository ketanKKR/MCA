#include <stdio.h>
#include <conio.h>

int num,sum,i;

int sum1(int num){
	for(i=1; i<=num; i++){
		sum+=i;
	}
	return sum;
}

void main(){
	clrscr();
	printf("Enter Num: ");
	scanf("%d",&num);

	printf("Sum: %d",sum1(num));
	getch();
}