#include <stdio.h>

// calculate the average of a given array of integers. Do not return a float: since the test cases expect the output to be an integer
int average(int numbers[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    // Calculate and return the average
    return sum / n;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    printf("The average is %d\n", average(numbers, n));
    return 0;
}
