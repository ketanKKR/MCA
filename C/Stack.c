#include <stdio.h>
#include <conio.h>

void menu(){
    printf("Add...1");
    printf("Modify...2");
    printf("Delete...3");
    printf("Exit...4");
    
}

int main(){
    int ch,arra[100],top=-1;
    //clrscr();
    do{
        printf("Enter Your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1://Add
            break;
            case 2://Modify
            break;
            case 3://Delete
            break;
            case 4://Exit
            break;
            default:
                printf("\nPlease enter a valid choice!");
            break;
        }
    }while(ch!=4);
    //getch();
}