//write a program in C to store information of n number of students using structures

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student
    {
        char name[20];
        int roll;
        float marks;
    };

    struct student s[n];

    printf("Enter the details of students: \n");
    for(int i=0; i<n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", s[i].name);
        printf("Enter the roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter the marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nThe details of students are: \n");
    for(int i=0; i<n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll);
        printf("Marks: %f\n", s[i].marks);
    }

    return 0;
}
