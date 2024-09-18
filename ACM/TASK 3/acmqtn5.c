#include <stdio.h>

int main() {
    int a, b, c;
    
    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000 - a; b++) {
            c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                printf("The product of a, b, c is: %d\n", a * b * c);
                return 0; // Exit after finding the solution
            }
        }
    }
    
    return 0;
}
