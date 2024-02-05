#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef enum Bool{false,true}Bool;

Bool primeCheck(int num){
    int i,sqRoot;
    if(num==1 || num==0){
        return false;
    }
    if(num==2){
        return true;
    }
    if(num%2==0){
        return false;
    }
    else{
        sqRoot=sqrt(num);
        for(i=3; i<sqRoot; i++){
            if(num%i==0){
                return false;
            }
        }
    }

    return true;
}

int swap(int num,short len){
    int temp;
    if(len==1){
        return num;
    }
    temp = num%10;
    num /= 10;
    temp*=pow(10,len-1);

    return temp+num;
}

Bool circularPrime(int num,short len){
    int i;
    if(len==1){
        return false;
    }
    else if(primeCheck(num)==true){
        for(i=1; i<len; i++){
            num=swap(num,len);
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

Bool goodPrime(int primeSq,int primeMul){
    if(primeSq>=primeMul){
        return true;
    }
    else{
        return false;
    }
}

void fileStore(int prime,char fileName[20]){
    FILE* file;
    file = fopen(fileName,"a");
    fprintf(file,"%d\n",prime);
    fclose(file);
}

int fildLength(int num){
    int len=0;
    while(num>0){
	num/=10;
	len++;
    }
    
    return len;
}

int main(){
    int i,c=-1,k=0,prime[168],goodPrimeNum[100];
    short len;
    //clrscr();

    //Store all Prime number in array
    for(i=2; i<1000; i++){
        if(primeCheck(i)==true){
            c++;
            prime[c]=i;
            printf("%5d",prime[c]);
            printf("\n\n\n%d\n\n\n",c);
        }
    }

    //Print and store Good prime number in file
    printf("\n\n---------------Good Prime---------------");
    for(i=2; i<c; i++){
        if(goodPrime(prime[i]*prime[i],prime[i-1]*prime[i+1])==true){
            printf("\n%d",prime[i]);
            goodPrimeNum[k]=prime[i];
            k++;
            fileStore(prime[i],"Gprime.txt");
        }
    }

    //Print and store good circular prime number in file
    printf("\n\n---------------Circular Good Prime---------------");
    for(i=0; i<168; i++){
        len=fildLength(prime[i]);
        if(circularPrime(goodPrimeNum[i],len)==true){
            printf("\n%d",goodPrimeNum[i]);
            fileStore(goodPrimeNum[i],"Cprime.txt");
        }
    }
    //getch();
    return 0;
}