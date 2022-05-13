//write a program to calculate the maximum of three numbers.


#include<stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        max = a;
    else if (b > a && b > c)
        max = b;
    else
        max = c;
    printf("Maximum of %d, %d and %d is %d\n", a, b, c, max);
    return 0;
}
