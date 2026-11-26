#include<stdio.h>
int linearSearch(int *arr, int n, int var)
{
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)==var)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int arr[100], n, var;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &var);
    int (*search)(int *, int, int);
    search=linearSearch;
    if(search(arr, n, var) == 0)
    {
        printf("Element %d not found in the array.\n", var);
    }
    else
    {
    printf("Element %d found at index: %d\n", var, search(arr, n, var));
    }
    return 0;
}