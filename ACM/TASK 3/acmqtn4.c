#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, count = 0, number = 2, nthPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        if (isPrime(number)) {
            count++;
            nthPrime = number;  
        }
        number++;
    }

    printf("The %dth prime number is %d\n", n, nthPrime);

    return 0;
}

