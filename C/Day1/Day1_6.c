#include <stdio.h>
#include <conio.h>

int main(){
    char stdName[50],address[100],email[100];
    long long int mobile;
    clrscr();
    
    printf("Enter Student Name: ");
    fgets(stdName, sizeof(stdName), stdin);
    printf("Enter Student Address: ");
    fgets(address, sizeof(address), stdin);
    printf("Enter Student Mobile: ");
    scanf("%lld",&mobile);
    getchar();
    printf("Enter Student E-Mail: ");
    fgets(email, sizeof(email), stdin);

    printf("\n\nStudent Name: %sStudent Address: %sStudent Mobile: %lld\nStudent E-Mail: %s",stdName,address,mobile,email);

    getch();
    return 0;
}