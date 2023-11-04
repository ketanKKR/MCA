//DAy Using Switch case
#include<stdio.h>
#include<conio.h>
void main()
{
	char cha;
	clrscr();

	printf("\n\tEtner Character : ");
	scanf(" %c",&cha);

	switch(cha)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\n\n\t%c is Vowel",cha);
			break;
		default:
			printf("\n\n\t%c is Consonant");
	}
	getch();
}