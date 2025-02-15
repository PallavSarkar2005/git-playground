#include "reverse_num.h"
#include <stdio.h>

int reverse_num(int num)
{
    int reversedNum = 0, remainder;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num = 12345; 
    printf("The reversed number is %d\n", reverse_num(num));
    return 0;
}
