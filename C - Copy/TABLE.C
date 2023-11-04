//Multiplication Tabel
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,e,i;

	clrscr();

	printf("\n\n\tEnter No. For Mul. Table : ");
	scanf("%d",&n);
	printf("\n\tEnter Start Value : ");
	scanf("%d",&s);
	printf("\n\tEnter End Value : ");
	scanf("%d",&e);

	for(i=s; i<=e; i++)
	{
		printf("\n\t %d X %d = %d",n,i,i*n);
	}
	getch();
}