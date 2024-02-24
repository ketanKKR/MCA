#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int order[3][10]={{1,1,0,0,1,1,0,0,0,1},{0,1,1,0,1,1,0,1,0,1},{1,0,1,1,0,0,1,0,0,1}};

int randNum(int num){
    return rand() % (num + 1 - 0) + 0;
}

char words[10][10]={"WELCOME","APPLE","JUICE","CANDY","MANGO","RED","CAT","COFFEE","BUS","MMC"};


void printWord(int randomNum,short len,short orderIndex){
    int i;
    printf("\n%s",words[randomNum]);
    printf("\nWORD: ");
    for(i=0; i<len; i++){
        if(order[orderIndex][i]==1){
            printf(" %c",words[randomNum][i]);
        }
        else{
            printf(" _",words[randomNum][i]);
        }
    }
}

int main(){
    int i,k,count=3;
    short orderIndex,randomNum,len,result=0;
    char match;
    //clrscr();
    for(i=0; i<1; i++){
        srand((unsigned int)time(NULL));
        randomNum=randNum(9);
        srand((unsigned int)time(NULL));
        orderIndex=randNum(2);
        len=strlen(words[randomNum]);
        printWord(randomNum,len,orderIndex);
        for(k=0; k<len; k++){
            result=0;
            count=3;
            while(result==0){
                if(order[orderIndex][k]==0){
                    printf("\nChracter%d:",k+1);
                    scanf("%c",&match);
                    getchar();

                    if(match==words[randomNum][k]){
                        printf("Correct!");
                        break;
                    }
                    else{
                        printf("Incorrect");
                        count--;
                        printf("\nYou have %d try left",count);
                        if(count==0){
                            return 1;
                        }
                    }
                }
            }
        }
    }
}