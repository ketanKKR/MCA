//While Loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();

	printf("\n\n\tEnter No. : ");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("\n%d",i);
		i--;
	}
	getch();
}