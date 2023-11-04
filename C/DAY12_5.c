#include <stdio.h>
#include <conio.h>

int num,i=0,sum=0;

void PerfectNum(int num){
	for(i=1; i<num; i++){
		if(num % i == 0){
			sum += i;
		}
	}

	if(sum==num){
		printf("Number %d is a Perfect Number.",num);
	}
	else{
		printf("Number %d is not a Perfect Number.",num);
	}
}

int main(){
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);

	PerfectNum(num);

	getch();
	return 0;
}