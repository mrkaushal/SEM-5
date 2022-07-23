//* A program to calculate the factorial of a number using recursion.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n)
{
    int i, fact = 1, counter = 0;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        counter++;
    }
    return printf("Factorial of %d is %d and it took %d iterations to calculate it\n", n, fact, counter);
}

void main()
{
    int n, fact, counter;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n);
}