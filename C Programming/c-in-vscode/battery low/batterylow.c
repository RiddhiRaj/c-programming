#include<stdio.h>

int main(){
    int T,X;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf("\n%d",&X);
        if (X<=15)
        printf("YES\n");
        else
        printf("NO\n");
    }
    
    return 0;
}