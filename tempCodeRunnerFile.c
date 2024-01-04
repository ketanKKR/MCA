#include <stdio.h>
#include <conio.h>

int primeCheck(long int num){
	long int i;
	for(i=2; i<num; i++){
		if(num%i==0){
			return 0;//Not Prime

		}
	}
	return 1;//Prime
}

int circularNum(long int num,short len){
	//this function swap first and last digit
	long int temp,temp2;
	temp=num%10;
	temp2=num/10;
	if(len==3)
		temp*=100;
	else if(len==4)
		temp*=1000;
	else
		temp*=10000;
	num=temp+temp2;

	return num;
}

void fileWrite(long int prime){
	FILE *file;

	file=fopen("prime.txt","a");
	fprintf(file,"\n%ld",prime);//store Circular prime numbers in file

	fclose(file);
}

int intLen(long int num){
	//find integer length
	int len=0;
	while(num>0){
		num/=10;
		len++;
	}

	return len;
}

int main(){
	short flag=0,j,len;
	long int i,temp,temp2,temp3;
	//clrscr();
	for(i=100; i<999; i++){
		temp=i;
		len=intLen(temp);
		flag=0;
		for(j=0; j<len; j++){
			if(primeCheck(temp)==0){
				flag=1;//if not prime
				break;
			}
			temp3=temp%10;
			temp2=temp/10;
			if(len==3){
				temp3*=100;
			}
			else if(len==4){
				temp3*=1000;
			}
			else{
				temp3*=10000;
			}
			temp=temp3+temp2;//find next circular num for checking if it is prime or not
			//printf("\ntemp:%ld",temp);
		}
		if(flag!=1){
			printf("\n%ld",i);//print circular prime numbers
			fileWrite(i);
		}
	}
	getch();
	return 0;
}