#include <stdio.h>
#include <conio.h>
#include <math.h>

int primeCheck(int num){
    int i;
    if(num==1){
        return 0;
    }
    else{
        for(i=2; i<num; i++){
            if(num%i==0){
                return 0;//Not Prime
            }
        }
    }
    return 1;//Prime
}

int swap(int num,short len){
    int temp;
    if(len==1){
        return num;
    }
    temp = num%10;
    num /= 10;
    if(len==2){
        temp*=10;
    }
    else if(len==3){
        temp*=100;
    }
    else if(len==4){
        temp*=1000;
    }

    return temp+num;
}

int circularPrime(int num,short len){
    int i;
    if(primeCheck(num)==1){
        for(i=1; i<len; i++){
            num=swap(num,len);
            if(primeCheck(num)==0){
                return 0;//Not Circular Prime
            }
        }
    }
    else{
        return 0;//Not Circular Prime
    }

    return 1;//Circular Prime
}

int goodPrime(int prime,int Fprime,int Lprime){
    int primeSq = pow(prime,2);
    int primeMul = Lprime*Fprime;

    if(primeSq>=primeMul){
        return 1;//Good Prime
    }
    else{
        return 0;//Not a Good Prime
    }
}

void fileStore(int prime,char fileName[100]){
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
    int i,c=0,prime[168];
    short len;
    //clrscr();
    
    //Store all Prime number in array
    for(i=2; i<1000; i++){
        if(primeCheck(i)==1){
            prime[c]=i;
            c++;
        }
    }

    for(i=0; i<168; i++){
        if(goodPrime(prime[i],prime[i-1],prime[i+1])==1){
            printf("\n%d",prime[i]);
            fileStore(prime[i],"Gprime.txt");
        }
    }

    for(i=0; i<168; i++){
        len=fildLength(prime[i]);
        if(circularPrime(prime[i],len)==1){
            printf("\n%d",prime[i]);
            fileStore(prime[i],"Cprime.txt");
        }
    }
    //getch();
    return 0;
}