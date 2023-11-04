#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;

	clrscr();

	printf("\n\n\tEnter No. : ");
	scanf("%d",&n);

	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n\n\t%d Is a Prime No..",n);
	}
	else
	{
		printf("\n\n\t%d Is Not a Prime No..",n);
	}
}