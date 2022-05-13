//write a program in C to store information of 1 student using structures

#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student
    {
        char name[20];
        int roll;
        float marks;
    };  //structure declaration

    struct student s; //structure variable declaration

    printf("Enter the details of student: \n");
    printf("Enter the name: ");
    scanf("%s", s.name);
    printf("Enter the roll number: ");
    scanf("%d", &s.roll);
    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    printf("\nThe details of student are: \n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %f\n", s.marks);
    
    return 0;
}
