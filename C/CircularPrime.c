#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef enum Bool{false,true}Bool;

int fildLength(int num){
    int len=0;
    while(num>0){
        num/=10;
        len++;
    }
    return len;
}

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

int main(){
    int i;
    short len;
    //clrscr();
    
    for(i=2; i<1000; i++){
        len=fildLength(i);
        if(circularPrime(i,len)==true){
            printf("%5d",i);
        }
    }
    getch();
    return 0;
}