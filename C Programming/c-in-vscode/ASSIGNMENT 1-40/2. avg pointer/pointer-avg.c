//calculate the average of numbers between m and n using pointers(cant do)
#include<stdio.h>
int main()
{
    int m,n,i,sum=0,avg;
    printf("Enter the value of m and n\n");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        sum=sum+i;
    }
    avg=sum/(n-m+1);
    printf("The average is %d",avg);
    return 0;
}
