#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int count;
    unsigned long num1 = 1, num2 = 2, sum;

    printf("%lu, %lu", num1, num2);

    for (count = 2; count < 98; count++)
    {
        sum = num1 + num2;
        printf(", %lu", sum);
        num1 = num2;
        num2 = sum;
    }

    printf("\n");
    return (0);
}
