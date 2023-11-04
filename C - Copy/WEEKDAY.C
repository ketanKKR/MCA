#include <stdio.h>
#include <conio.h>

void main(){
	int day;
	clrscr();
	printf("Enter Number Between 1 to 7: ");
	scanf("%d",&day);

	if(day<1 || day>7){
		printf("Please Enter Valid Number!");
	}else if(day==1){
		printf("\nMonday");
	}else if(day==2){
		printf("\nTuesday");
	}else if(day==3){
		printf("\nWesnesday");
	}else if(day==4){
		printf("\nThusday");
	}else if(day==5){
		printf("\nFriday");
	}else if(day==6){
		printf("\nSatarday");
	}else if(day==7){
		printf("\nSunday");
	}
	getch();
}