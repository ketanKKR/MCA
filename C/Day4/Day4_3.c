#include<stdio.h>
#include<conio.h>
int main()
{
	  int data,sk,en,dn;
	  clrscr();
	  printf("enter data:");
	  scanf("%d",&data);
	  printf("enter secret key:");
	  scanf("%d",&sk);
	  en=data^sk;
	  printf("encryption data is :%d\n",en);
	  dn=en^sk;
	  printf("decryption data is:%d",dn);
	  getch();
	return 0;
}