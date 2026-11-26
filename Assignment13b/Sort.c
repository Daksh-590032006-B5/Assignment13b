#include<stdio.h>
void asc(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}
void desc(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(arr+j)<*(arr+j+1))
            {
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}
int main()
{
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    void (*ascend)(int *, int);
    void (*descend)(int *, int);
    ascend=asc;
    descend=desc;
    ascend(arr, n);
    printf("Array in ascending order: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    descend(arr, n);
    printf("Array in descending order: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", *(arr+i));
    }
    return 0;
}