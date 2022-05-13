//add and subtract 2 numbers during run time
#include<stdio.h>
int main(){
    int number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);

    //calculating difference
    sum = number1 - number2;

    printf("\n%d - %d = %d", number1, number2, sum);

    return 0;
}