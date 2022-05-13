#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,temp,*a,*b;
    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping x=%d and y=%d\n",x,y);
    a=&x;
    b=&y;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping x=%d and y=%d\n",x,y);

    return 0;
}