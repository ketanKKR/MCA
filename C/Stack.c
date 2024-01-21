#include <stdio.h>
#include <conio.h>

void menu(){
    printf("\nAdd.......1");
    printf("\nModify....2");
    printf("\nDisplay...3");
    printf("\nDelete....4");
    printf("\nExit......5");
    
}

int main(){
    int ch,stack[100],top=-1;
    //clrscr();
    do{
        menu();
        printf("\n\nEnter Your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1://Add
                printf("\nEnter Value: ");
                scanf("%s",&stack[top++]);
            break;
            case 2://Modify
            break;
            case 3://Display
            break;
            case 4://Delete
            break;
            case 5://Exit
            break;
            default:
                printf("\nPlease enter a valid choice!");
            break;
        }
    }while(ch!=5);
    //getch();
}