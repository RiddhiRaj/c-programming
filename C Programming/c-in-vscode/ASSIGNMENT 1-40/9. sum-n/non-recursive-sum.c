//sum of n natural numbers using non-recursive method

#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum = sum + n;
        n--;
    }
    printf("Sum of %d numbers is %d\n", n, sum);
    return 0;
}
