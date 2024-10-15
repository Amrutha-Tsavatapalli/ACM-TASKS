#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int flag = b;
        b = a % b;
        a = flag;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
int result = lcm(num1,num2);
    int gcdResult = gcd(num1, num2);
    printf("The smallest multiple (LCM) of %d and %d is: %d\n", num1, num2, result);
    printf("The smallest multiple (LCM) of %d and %d is: %d\n", num1, num2, lcmResult);

    return 0;
}

