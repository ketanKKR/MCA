#include <stdio.h>
#include <conio.h>

int main(){
	int age;
	clrscr();
	printf("Enter Your Age: ");
	scanf("%d",&age);

	if(age>=18){
		printf("\nYou Are Aligible for Voting.");
	}else{
		printf("\nYou Are Not Aligible for Voting.");
	}
	getch();
	return 0;
}