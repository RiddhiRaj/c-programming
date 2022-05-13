/*Write a C program to print the following pattern:  
A B C D E 
A B C D 
A B C 
A B 
A
*/
#include<stdio.h>
int main()
{
    int i,j;
    char a[]="ABCDE";
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    


}
