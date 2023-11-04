//DAy Using Switch case
#include<stdio.h>
#include<conio.h>
void main()
{
	int d;
	clrscr();

	printf("Etner Day : ");
	scanf("%d",&d);

	switch(d)
	{
		case 1:
			printf("\n\n\tIt's Monday");
			break;
		case 2:
			printf("\n\n\tIt's Tuseday");
			break;
		case 3:
			printf("\n\n\tIt's Wednesday");
			break;
		case 4:
			printf("\n\n\tIt's Thursday");
			break;
		case 5:
			printf("\n\n\tIt's Friday");
			break;
		case 6:
			printf("\n\n\tIt's Saturday");
			break;
		case 7:
			printf("\n\n\tIt's Sunday");
			break;
		default:
			printf("\n\n\tInvalid Day");
	}
	getch();
}