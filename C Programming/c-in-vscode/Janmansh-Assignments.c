#include<stdio.h>
int main(void)
{
    int T,X;
    scanf("%d",&T);
    while (T>0)
    {
        scanf("%d",&X);
        if (X+3>10)
        printf("NO\n");
        else
        printf("YES\n");
        T--;
    }
    return 0;
}
