#include <stdio.h>
//#include <conio.h>

int primeCheck(long int num){
	long int i;
	for(i=2; i<num; i++){
		if(num%i==0){
			return 0;
			break;
		}
	}
	return 1;
}

int circularNum(long int num,short len){
	long int temp=num%10;
	long int temp2=num/10;
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
	fprintf(file,"\n%d",prime);

	fclose(file);
}

int intLen(long int num){
	int len=0;
	while(num>0){
		num/=10;
		len++;
	}

	return len;
}

int main(){
	short flag=0,j,len;
	long int i,temp;
	//clrscr();
	for(i=100; i<99999; i++){
		temp=i;
		len=intLen(temp);
		flag=0;
		for(j=0; j<len; j++){
			if(primeCheck(temp)==0){
				flag=1;
				break;
			}else{
				temp = circularNum(temp,len);
			}
		}
		if(flag!=1){
			printf("\n%ld",i);
			fileWrite(i);
		}
	}
	return 0;
}