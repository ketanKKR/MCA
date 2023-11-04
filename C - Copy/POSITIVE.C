#include <stdio.h>
#include <conio.h>

void main(){
	int num;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&num);

	if(num==0){
		printf("\nNumber is 0.");
	}else if(num>0){
		printf("\n%d Is a Positive Number",num);
	}else{
		printf("\n%d Is a Nagative Number",num);
	}

	getch();
}