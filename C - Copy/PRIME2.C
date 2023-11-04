//Prime No..
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,flag=0;

	clrscr();

	printf("\n\n\tEnter No. : ");
	scanf("%d",&n);

	printf("\n");
	for(j=2; j<=n; j++)
	{
		flag=0;
		for(i=2; i<=j/2; i++)
		{
			if(j%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf(" %d ",j);
		}
	}
	getch();
}