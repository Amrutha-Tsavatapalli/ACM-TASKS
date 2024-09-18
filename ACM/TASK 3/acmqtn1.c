#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) 
    return (0);
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return (0);
    }
    return (1);
}

int main() {
    int n, count = 0, sum = 0, number = 2;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    while (count < n) {
        if (isPrime(number)) {
            sum += number;
            count++;
        }
        number++;
    }

    
    printf("Sum of the first %d prime numbers is: %d\n", n, sum);

    return (0);
}