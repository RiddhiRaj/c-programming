//Write a program to calculate the reverse of a string without using strrev() function.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, j, k;
    printf("Enter the string: ");
    scanf("%s", str);
    k = strlen(str);
    for(i=0;i<k;i++){ //reverse the string
        j = k-i-1;  //k-i-1 is used to avoid the extra space
        printf("%c",str[j]);    //print the reverse string
    }
    printf("\n");
    return 0;
}
