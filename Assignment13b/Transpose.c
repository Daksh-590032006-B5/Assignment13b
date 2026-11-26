#include <stdio.h>
int main()
{
    int matrix[3][3], transpose[3][3];
    int i, j;
    int (*mp)[3] = matrix;
    int (*tp)[3] = transpose;
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(mp + i) + j));
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(tp + j) + i) = *(*(mp + i) + j);
        }
    }
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(mp + i) + j));
        }
        printf("\n");
    }
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(tp + i) + j));
        }
        printf("\n");
    }
    return 0;
}
