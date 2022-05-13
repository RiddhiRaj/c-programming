//sort an array using pointers

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,*p,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n-1;i++) //USED BUBBLE SORT
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}