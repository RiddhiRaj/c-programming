//find the maximum of two numbers using pointers
#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    if(*p>*q)
    {
        printf("%d is greater than %d",*p,*q);
    }
    else
    {
        printf("%d is greater than %d",*q,*p);
    }
    return 0;
}
