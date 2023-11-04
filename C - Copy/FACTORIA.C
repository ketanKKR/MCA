//While Loop
#include<stdio.h>
#include<conio.h>
void main()
{
	long int i,n,fact=1;
	clrscr();

	printf("\n\n\tEnter No. : ");
	scanf("%ld",&n);
	printf("\n");
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		printf("%d * ",i);
		i++;
	}
	printf("\n\n\tFactorial of %ld is : %ld",n,fact);
	getch();
}