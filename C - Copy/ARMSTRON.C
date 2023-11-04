//Reverser No
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,sum=0,temp;
	clrscr();

	printf("\n\n\tEnter No. : ");
	scanf("%d",&n);
	temp=n;

	printf("\n");

	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
		//printf("%d",rem);
	}
	if(sum==temp)
	{
		printf("\n\n\t%d Is Armstrong Number..",temp);
	}
	else
	{
		printf("\n\n\t%d Is Not Armstrong Number..",temp);
	}
	getch();
}