//* The code defines a function to find the greatest common divisor (GCD) of two numbers using Euclidean algorithm, and then calls the function in the main program.
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int i, counter = 0, temp;
    for(i=a; i>0; i--)
    {
        counter++;
        if(a%i==0 && b%i==0)
        {
            temp = i;
            break;
        }
    }
    printf("The number of iterations is %d\n", counter);
    return temp;
}

int main()
{
    int a, b, res;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}