//Multiplication Tabel
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;

	clrscr();

	printf("\n\n\tEnter No. For Mul. Table : ");
	scanf("%d",&n);

	printf("\n\n\tEven Number :");
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("\n\t\t    %d",i);
		}
	}
	getch();
}