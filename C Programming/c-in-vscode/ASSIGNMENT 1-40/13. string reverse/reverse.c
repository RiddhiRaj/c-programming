//program to reverse a string without using library functions

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int i, j, len = strlen(str);
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i]; //swap
        str[i] = str[j]; 
        str[j] = temp; 
    }
    printf("Reversed string is: %s\n", str);
    return 0;
}
