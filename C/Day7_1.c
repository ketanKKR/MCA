#include <stdio.h>
#include <conio.h>

int main(){
    //clrscr();
    int num,sum=0,i;

    printf("Enter Num: ");
    scanf("%d",&num);

    printf("Sum of Even Numbers ");
    for(i=2; i<=num; i++){
        if(i%2==0){
            sum += i;
            printf("%d",i);
            if(i<num-1){
                printf("+");
            }
        }
    }

    printf(" = %d",sum);

    getch();
    return 0;
}