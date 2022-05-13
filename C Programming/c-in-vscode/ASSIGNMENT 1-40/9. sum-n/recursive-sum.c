//recursive function to find sum of n numbers

#include <stdio.h>
int sum_n(int n); //function declaration
int main()
{
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    sum = sum_n(n); //function call
    printf("Sum of %d numbers is %d\n", n, sum);
    return 0;
}

int sum_n(int n) //function definition
{
    if (n == 1) //base case
        return 1;
    else
        return n + sum_n(n - 1); //recursive call
}
