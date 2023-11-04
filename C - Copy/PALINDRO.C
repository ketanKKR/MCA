//Palindrome No
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,temp,rev=0;
	clrscr();

	printf("\n\n\tEnter No. : ");
	scanf("%d",&n);
	temp=n;

	printf("\n");

	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=(rev*10)+rem;
		//printf("%d",rem);
	}
	printf("\n\n\tRverser No. of %d Is %d ",temp,rev);
	if(rev==temp)
	{
		printf("\n\n\t%d Is Palindrome Number..",temp);
	}
	else
	{
		printf("\n\n\t%d Is Not Palindrome Number..",temp);
	}
	getch();
}