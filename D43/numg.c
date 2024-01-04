#include <stdio.h>
#include <conio.h>

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

int main(){
    long int num=12345;
    //clrscr();
    for(int i=0; i<5; i++){
        printf("\n%ld",num);
        num=circularNum(num,5);
    }

    return 0;
}