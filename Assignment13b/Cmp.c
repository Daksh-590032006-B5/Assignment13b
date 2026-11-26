#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    char *ptr1, *ptr2;
    int isEqual = 1;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    ptr1 = str1;
    ptr2 = str2;
    while (*ptr1 != '\0')
    {
        if (*ptr1 == '\n')
        {
            *ptr1 = '\0';
            break;
        }
        ptr1++;
    }
    while (*ptr2 != '\0')
    {
        if (*ptr2 == '\n')
        {
            *ptr2 = '\0';
            break;
        }
        ptr2++;
    }
    ptr1 = str1;
    ptr2 = str2;
    while (*ptr1 != '\0' || *ptr2 != '\0')
    {
        if (*ptr1 != *ptr2)
        {
            isEqual = 0;
            break;
        }
        ptr1++;
        ptr2++;
    }
    if (isEqual == 1)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }
    return 0;
}
