#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int randNum(int num){
    rand() % (num + 1 - 0) + 0
}

char words[10][10]={"WELCOME","APPLE","JUICE","CANDY","MANGO","RED","CAT","COFFEE","BUS","MMC"};
int order[3];
order1[10]={1,1,0,0,1,1,0,0,0,1};
order2[10]={0,1,1,0,1,1,0,1,0,1};
order3[10]={1,0,1,1,0,0,1,0,0,1};


/*void printWord(int randomNum){
    int i;
    printf("\nWORD: ");
    for(i=0; i<len; i++){
        printf("%5d",randNum());
    }
}*/

int main(){
    int i;
    for(i=0; i<100; i++){
        printf("%5d",randNum(9));
    }
}