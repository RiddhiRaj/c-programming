//Write a program to concatenate two strings without using strcat() function

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int i, j, k;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    k = strlen(str1);
    for (i = 0; i < k; i++)
        str3[i] = str1[i];
    j = strlen(str2);
    for (i = k; i < k + j; i++)
        str3[i] = str2[i - k]; //i-k is used to avoid the extra space
    str3[i] = '\0'; //to avoid the extra space
    printf("The concatenated string is: %s\n", str3);
    return 0;
}
