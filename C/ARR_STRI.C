#include <stdio.h>
#include <conio.h>

int main(){
	//char <variable_name> [size_of_array] [size_of_string]
	char car [5][20];
	int i,j;
	clrscr();

	for(i=0; i<5; i++){
		printf("Enter String%d: ",i+1);
		gets(car[i]);
	}

	for(i=0; i<5; i++){
		for(j=0; j<strlen(car[i]); j++){
			printf("%c",car[i][j]);
		}
		printf("\n");
	}

	getch();
	return 0;
}