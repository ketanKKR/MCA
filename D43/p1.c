#include <stdio.h>
#include <math.h>

int is_prime(int n);
int circular_prime(int n);

int main() {
    FILE *fp = fopen("primes.txt", "a");
    int num_digits, i;
    long int count=0;
    
    for (num_digits = 3; num_digits <= 5; num_digits++) {
        for (i = pow(10, num_digits - 1); i < pow(10, num_digits); i++) {
            if (circular_prime(i)) {
                fprintf(fp, "%d\n", i);
                //printf("\n%d",i);
            }
            count++;
        }
    }

    fclose(fp);
    printf("\n%d\n",count);
    printf("Circular primes written to 'primes.txt'\n");

    // Wait for user input
   // getch();
    return 0;
}

int is_prime(int n) {
    int i;
    if (n <= 1) {
        return 0;  // Not prime
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

int circular_prime(int n) {
    int num_digits = 0;
    int temp = n, rotations, last_digit;

    while (temp > 0) {
        num_digits++;
        temp /= 10;
    }

    rotations = num_digits;
    temp = n;

    while (rotations > 0) {
        if (!is_prime(temp)) {
            return 0;  // Not a circular prime
        }

        // Rotate digits
        last_digit = temp % 10;
        temp /= 10;
        temp = temp + last_digit * pow(10, num_digits - 1);
        rotations--;
    }

    return 1;  // Circular prime
}
