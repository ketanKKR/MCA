#include <stdio.h>
#include <conio.h>

int main(){
    char character;
    int assci;
    clrscr();

    printf("Enter Character: ");
    scanf("%c",&character);

    assci = character;

    if(assci>=65 && assci <=90 || assci>=97 && assci<=122){
        printf("%c is a Alphabet.",character);
    }else{
        printf("%c is not a Alphabet.",character);
    }
}