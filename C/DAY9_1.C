#include <stdio.h>
#include <conio.h>

int main(){
	int marks[10],i;
	//clrscr();

	for(i=0; i<10; i++){
		printf("Enter Marks of Student%d: ",i+1);
		scanf("%d",&marks[i]);
	}

	for(i=0; i<10; i++){
		printf("\nMarks of Student%d is: %d",i+1,marks[i]);
		if(marks[0]<marks[i]){
			marks[0] = marks[i];
		}
	}

	printf("\n\nHigest Marks is: %d",marks[0]);
	getch();
	return 0;
}