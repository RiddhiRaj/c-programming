//write a program which reads first name and family name of a person. it also reads a character to know the gender of the person, finally forms a string containing the full name of the person the following format
//a prefix(Mr. for male and Ms. for female) followed by a space and then the first letter of the first name in uppercase followed by a (.), a space and the family name, first letter of which should be in uppercase. for example given the input "Santanu" "Kumar" 'M', the output should be "Mr. S. Kumar"

#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[20], family_name[20], prefix[20];
    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("Enter family name: ");
    scanf("%s", family_name);
    printf("Enter prefix: ");
    scanf("%s", prefix);
    if (strcmpi(prefix, "M") == 0)
    {
        strcpy(prefix, "Mr.");
        printf("%s %c%s %s", prefix, first_name[0], ".", family_name);
    }
    else if (strcmpi(prefix, "F") == 0)
    {
        strcpy(prefix, "Ms.");
        printf("%s %c%s %s", prefix, first_name[0], ".", family_name);
    }
    else
    {
        printf("Invalid prefix");
    }
    return 0;
}