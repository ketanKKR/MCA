#include <stdio.h>
#include <conio.h>

int main(){
    //clrscr();
    int num,sum=0,i;

    printf("Enter Num: ");
    scanf("%d",&num);

    printf("Sum of Numbers ");
    for(i=1; i<=num; i++){
        sum += i;
        if(i<num){
            printf("%d+",i);
        }
    }

    printf("%d = %d",num,sum);

    getch();
    return 0;
}