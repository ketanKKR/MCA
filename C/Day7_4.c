#include <stdio.h>
#include <conio.h>

int main(){
    //clrscr();
    int num,sum=0,i,start,end,final;

    printf("Enter Starting Limit: ");
    scanf("%d",&start);
    printf("Enter Ending Limit: ");
    scanf("%d",&end);

    printf("Sum of Numbers ");
    for(i=start; i<=end; i++){
        if(i%7==0){
            sum += i;
            if(i<end-7){
                printf("%d+",i);
            }
            final = i;
        }
    }

    printf("%d = %d",final,sum);

    getch();
    return 0;
}