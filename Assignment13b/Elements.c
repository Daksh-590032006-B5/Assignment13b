#include <stdio.h>
int findLargest(int *ptr, int n)
{
    int largest = *ptr;
    int i;
    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }
    return largest;
}
int findSmallest(int *ptr, int n)
{
    int smallest = *ptr;
    int i;
    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }
    return smallest;
}
int main()
{
    int arr[100], n, largest, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = findLargest(arr, n);
    smallest = findSmallest(arr, n);
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}