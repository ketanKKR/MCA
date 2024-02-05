#include <stdio.h>
#include <conio.h>
#include <math.h>

//typedef enum int{false,true}int;

int primeCheck(int num);
int circularPrime(int num,short len);
int happyPrime(int prime);
short findLength(int num);
int swap(int num,short len);
void fileStore(int prime,const char fileName[20]);

int main(){
	int i,happyPrimeNum[40],primeSize=-1;
	short len;
	//clrscr();

	printf("\nHappy Prime Numbers\n");
	for(i=2; i<1000; i++){
		if(primeCheck(i)==true){
			if(happyPrime(i)==true){
				printf("%5d",i);
				primeSize++;
				happyPrimeNum[primeSize]=i;
				fileStore(i,"hprime.txt");
			}
		}
	}

	printf("\n\nCircular Prime Numbers\n");
	for(i=0; i<10; i++){
		len=findLength(happyPrimeNum[i]);
		if(circularPrime(happyPrimeNum[i],len)==true){
			printf("%5d",happyPrimeNum[i]);
			fileStore(happyPrimeNum[i],"chprime.txt");
		}
		//printf("%5d",happyPrimeNum[i]);
	}

	return 0;
}

int primeCheck(int num){
	int sqRoot,i;
	if(num==0 || num==1)
		return false;
	if(num==2)
		return true;
	if(num%2==0)
		return false;
	sqRoot=sqrt(num);
	for(i=3; i<sqRoot; i++){
		if(num%i==0)
			return false;
	}

	return true;
}

int circularPrime(int num,short len){
	int i;
	if(len==1)
		return false;
	num = swap(num,len);
	if(primeCheck(num)==true){
		for(i=0; i<len; i++){
			
			if(primeCheck(num)==false){
				return false;
			}
		}
	}
	else{
		return false;
	}

	return true;
}

int happyPrime(int prime){
int sum=0,i,j,num=prime;
	short len;

	for(i=0; i<50; i++){
		len=findLength(prime);
		for(j=0; j<len; j++){
			num=prime%10;
			prime=prime/10;
			if(num!=0){
				sum+=num*num;
			}
			if(j==len-1){
				prime=sum;
			}
		}

		if(sum==1)
			return true;
		sum=0;
	}

	return false;
}

short findLength(int num){
	int len=0;
	while(num>0){
		num=num/10;
		len++;
	}

	return len;
}

int swap(int num,short len){
	int lastDigit;
	if(len==1)
		return num;
	lastDigit=num%10;
	num=num/10;
	lastDigit*=pow(10,len-1);

	return num+lastDigit;

}

void fileStore(int prime,const char fileName[20]){
	FILE *file;
	file = fopen(fileName,"a");

	fprintf(file,"%5d",prime);

	fclose(file);
}