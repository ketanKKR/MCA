#include <stdio.h>
#include <conio.h>

int num,i,flag=0;

void primeCheck(int num){
	for(i=2; i<num; i++){
		if(num%i==0){
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}
}

int main(){
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);
	primeCheck(num);

	if(flag==1){
		printf("Number is Not Prime");
	}
	else{
		printf("Number Is Prime");
	}
	getch();
	return 0;
}