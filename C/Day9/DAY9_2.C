#include <stdio.h>
#include <conio.h>

int main(){
	int marks[10],i,start=0,end=0,sum=0;
	clrscr();

	for(i=0; i<10; i++){
		printf("Enter Marks of Student%d: ",i+1);
		scanf("%d",&marks[i]);
	}

	printf("Enter Starting Index(0 to 9): ");
	scanf("%d",&start);
	printf("Enter Ending Index(0 to 9): ");
	scanf("%d",&end);

	if(end<start){
		printf("\nStarting Index should be less then Ending index!");
	}else{
		for(i=start; i<end; i++){
			sum+=marks[i];
		}
	}

	printf("\n\nSum of marks Range Between %d to %d is: %d",start,end,sum);
	getch();
	return 0;
}