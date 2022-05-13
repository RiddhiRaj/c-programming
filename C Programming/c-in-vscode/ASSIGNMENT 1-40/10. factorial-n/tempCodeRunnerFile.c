#include<stdio.h>
int factorial(int n);
int main()
{
    int n, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
