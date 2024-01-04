#include <stdio.h>
#include <conio.h>

int main(){
	int i,subject1[10],subject2[10],total_marks[10];
	clrscr();

	for(i=0; i<10; i++){
		printf("\nEnter Marks of Subject1 of Student%d: ",i+1);
		scanf("%d",&subject1[i]);
		printf("Enter Marks of Subject2 of Student%d: ",i+1);
		scanf("%d",&subject2[i]);
		total_marks[i] = subject1[i]+subject2[i];
	}

	printf("\nStudent_No\tTotal_Marks(Out of 200)");
	printf("\n----------------------------------------");
	for(i=0; i<10; i++){
		printf("\n%d\t\t\t%d",i+1,total_marks[i]);
	}

	getch();
	return 0;
}