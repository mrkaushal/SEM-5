//* Factorial program in c language using iterative approach with counter in function

#include <stdio.h>

int main()
{
    int n, fact, counter;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact = 1;
    counter = 0;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        counter++;
    }
    printf("Using iterative approach");
    printf("\nFactorial of %d is %d and it took %d iterations to calculate it", n, fact, counter);
    return 0;
}