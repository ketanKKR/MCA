#include<stdio.h>
#include<conio.h>

int LinearSearch(int [],int,int);

void main(){
    int a[100],n,i,key;
    char ch;
    clrscr();

    printf("Enter total array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
	 printf("Enter value %d: ",i+1);
	 scanf("%d",&a[i]);
    }
    do{
        printf("Enter value to search: ");
        scanf("%d",&key);

        if(LinearSearch(a,n,key)){
            printf("%d Found at",key);
        }
        else{
            printf("%d Not found",key);
        }
        printf("\nDo you want to cont: ");
    scanf("%s",&ch);
    }while(ch=='y'|| ch=='Y');

    getch();
}

int LinearSearch(int a[],int n,int key){
    int i, flag=0;
    for(i=0;i<n;i++){
        if(a[i]==key){
        flag=1;
        return flag;
        }
    }
    return flag;
}