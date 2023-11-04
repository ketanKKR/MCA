#include <stdio.h>
#include <conio.h>

int main(){
	int i,subject1[10],subject2[10],total_marks[10];
	char result[5];
	clrscr();

	for(i=0; i<3; i++){
		printf("\nEnter Marks of Subject1 of Student%d: ",i+1);
		scanf("%d",&subject1[i]);
		printf("Enter Marks of Subject2 of Student%d: ",i+1);
		scanf("%d",&subject2[i]);
		total_marks[i] = subject1[i]+subject2[i];
	}

	printf("\nStudent_No\tTotal_Marks(Out of 200)\tResult");
	printf("\n----------------------------------------");
	for(i=0; i<3; i++){
		if(subject1[i]>=50 && subject2[i]>=50){
			strcpy(result,"Pass");
		}
		else{
			strcpy(result,"Fail");
		}
		printf("\n%d\t\t\t%d\t%s",i+1,total_marks[i],result);
	}

	getch();
	return 0;
}