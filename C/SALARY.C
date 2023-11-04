#include <stdio.h>
#include <conio.h>

int main(){
	int jobid,level,basic,gross,netsal,tax,taxrate,HRA,perks;
	clrscr();
	printf("Enter Job no: ");
	scanf("%d",&jobid);
	printf("Enter Level: ");
	scanf("%d",&level);
	printf("Enter Basic Salary: ");
	scanf("%d",&basic);

	if(level==1){
		perks=1500;
	}
	else if(level==2){
		perks=950;
	}
	else if(level==3){
		perks=600;
	}
	else{
		perks=250;
	}

	HRA = basic*0.1;
	gross=basic+HRA+perks;

	if(gross<=2000){
		taxrate=0;
	}
	else if(gross>2000 && gross<=4000){
		taxrate=3;
	}
	else if(gross>4000 && gross<=5000){
		taxrate=5;
	}
	else{
		taxrate=8;
	}
	tax=gross*taxrate/100;
	netsal=gross-tax;

	printf("\nJob No: %d",jobid);
	printf("\nBasic Salary: %d",basic);
	printf("\nGross Salary: %d",gross);
	printf("\nNet Salary: %d",netsal);
	getch();
	return 0;

}