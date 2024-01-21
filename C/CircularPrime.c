#include <stdio.h>
#include <conio.h>

int fildLength(int num){
    int len=0;
    while(num>0){
        num/=10;
        len++;
    }
    return len;
}

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
    if(len==1){
        return 0;//Not Circular Prime
    }
    else if(primeCheck(num)==1){
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

int main(){
    int i;
    short len;
    //clrscr();
    
    for(i=2; i<100; i++){
        len=fildLength(i);
        if(circularPrime(i,len)==1){
            printf("\n%d",i);
        }
    }
    getch();
    return 0;
}