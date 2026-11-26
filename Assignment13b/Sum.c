/*Write a program to find the sum of each row and each column of a matrix using pointers*/
#include <stdio.h>
void sumRows(int *(matrix)[2], int rows, int cols)
{
    int sum;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + *(*(matrix + i)+ j);
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
}
void sumColumns(int *(matrix)[2], int rows, int cols)
{
    int sum;
    for (int j = 0; j < cols; j++)
    {
        sum = 0;
        for (int i = 0; i < rows; i++)
        {
           sum = sum + *(*(matrix + i)+ j);
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }
}
int main()
{
    int matrix[2][2], rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    sumRows(matrix, rows, cols);
    sumColumns(matrix, rows, cols);
    return 0;
}