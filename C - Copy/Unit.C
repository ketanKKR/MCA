#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	char name[15],add[25];

	clrscr();
	printf("\n\n\tEnter Name : ");
	gets(name);
	printf("\n\tEnter Address : ");
	gets(add);

	printf("\n\tEnter Unit : ");
	scanf("%d",&unit);

	printf("\n\n\t===============================");
	printf("\n\tName : %s",name);
	printf("\n\tAdd : %s",add);

	if(unit>=0 && unit<=50)
	{
		printf("\n\tPayable Amount : %.2f",unit*2.30);
	}
	else if(unit>=51 && unit<=100)
	{
		printf("\n\tPayable Amount : %.2f",unit*2.60);
	}
	else if(unit>=101 && unit<=299)
	{
		printf("\n\tPayable Amount : %.2f",unit*3.25);
	}
	else
	{
		printf("\n\tPayable Amount : %.2f",unit*4.35);
	}
	printf("\n\t===============================");
	getch();
}