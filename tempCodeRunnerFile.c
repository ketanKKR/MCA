#include <stdio.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int n) {
    bool prime[n + 1];
    for (int i = 2; i <= n; i++) {
        prime[i] = true;
    }
    
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
    
    printf("Prime numbers in the range 2 to %d are:\n", n);
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            printf("%d ", p);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    
    if (n >= 2) {
        sieve_of_eratosthenes(n);
    } else {
        printf("There are no prime numbers in the given range.\n");
    }
    
    return 0;
}
