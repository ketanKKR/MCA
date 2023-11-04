#include <stdio.h>
#include <conio.h>

int main(){
    //clrscr();
    int num,sum=0,i,num2=12;

    printf("Enter Num: ");
    scanf("%d",&num);

    printf("Sum of Numbers ");
    for(i=1; i<=num; i++){
        sum += num2;
        if(i<num){
            printf("%d+",num2);
            num2 = num2+10;
        }
    }

    printf("%d = %d",num2,sum);

    getch();
    return 0;
}