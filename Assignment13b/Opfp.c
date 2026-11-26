#include<stdio.h>
#include<string.h>
int string_length(char *str)
{
    return strlen(str);
}
char* string_copy(char *dest, char *src)
{
    return strcpy(dest, src);
}
int string_compare(char *str1, char *str2)
{
    return strcmp(str1, str2);
}
int main()
{
    char str1[100], str2[100], dest[100];
    int (*length_func)(char *);
    char* (*copy_func)(char *, char *);
    int (*compare_func)(char *, char *);
    length_func = string_length;
    copy_func = string_copy;
    compare_func = string_compare;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    printf("Length of first string: %d\n", length_func(str1));
    copy_func(dest, str1);
    printf("Copied string: %s\n", dest);
    int cmp_result = compare_func(str1, str2);
    if(cmp_result == 0)
        printf("Strings are equal.\n");
    else if(cmp_result < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");

    return 0;
}