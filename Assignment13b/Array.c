#include <stdio.h>
#include <stdlib.h>
struct Product
{
    int code;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct Product *ptr[10];
    int n, i;
    printf("Enter number of products (max 10): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        ptr[i] = (struct Product *)malloc(sizeof(struct Product));
        printf("\nEnter details for Product %d:\n", i + 1);
        printf("Product Code: ");
        scanf("%d", &ptr[i]->code);
        printf("Product Name: ");
        scanf(" %[^\n]", ptr[i]->name);
        printf("Quantity: ");
        scanf("%d", &ptr[i]->quantity);
        printf("Price: ");
        scanf("%f", &ptr[i]->price);
    }
    printf("\n--- Product Details ---\n");
    printf("Code\tName\t\tQuantity\tPrice\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%d\t\t%.2f\n", ptr[i]->code, ptr[i]->name, ptr[i]->quantity, ptr[i]->price);
    }
    for (i = 0; i < n; i++)
    {
        free(ptr[i]);
    }
    return 0;
}
