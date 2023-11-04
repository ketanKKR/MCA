#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char std[6][20],search[20];
	int i;
	clrscr();

	for(i=0; i<6; i++){
		printf("Enter Student Name: ");
		gets(std[i]);
	}

	printf("\nEnter Name you want to search: ");
	gets(search);

	for(i=0; i<6; i++){
		if(strcmp(std[i],search)==0){
			printf("\nStudent %s Found.",std[i]);
			break;
		}
		else{
			if(i==5)
			printf("\nStudent %s Not Found.",search);
		}
	}

	getch();
	return 0;
}
