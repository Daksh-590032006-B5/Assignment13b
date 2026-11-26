#include <stdio.h>
int main()
{
    char source[100], destination[100];
    char *srcPtr, *destPtr;
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    srcPtr = source;
    destPtr = destination;
    while (*srcPtr != '\0')
    {
        if (*srcPtr != '\n')
        {
            *destPtr = *srcPtr;
            destPtr++;
        }
        srcPtr++;
    }
    *destPtr = '\0';
    printf("Copied string: %s\n", destination);
    return 0;
}
