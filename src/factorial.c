#include "factorial.h"

// calculate the factorial of a given number
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}
