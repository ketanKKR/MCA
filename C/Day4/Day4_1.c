#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    clrscr();

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using ternary operator to find the maximum
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The maximum of the three numbers is: %d\n", max);

    getch();
    return 0;
}
