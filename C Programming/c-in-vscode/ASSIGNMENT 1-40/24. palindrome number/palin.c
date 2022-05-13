//Write a C Program to check whether the given number is palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, j, flag = 0;
    printf("Enter a number: ");
    gets(str);
    for(i=0, j=strlen(str)-1; i<j; i++, j--)
    {
        if(str[i]!=str[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%s is a palindrome.", str);
    else
        printf("%s is not a palindrome.", str);
    return 0;
}