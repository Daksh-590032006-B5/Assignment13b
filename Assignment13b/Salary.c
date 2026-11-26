#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee emp;
    struct Employee *ptr = &emp;
    float newSalary;
    printf("Enter Employee ID: ");
    scanf("%d", &ptr->id);
    getchar();
    printf("Enter Employee Name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = '\0';

    printf("Enter Current Salary: ");
    scanf("%f", &ptr->salary);

    printf("\n--- Current Employee Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    printf("\nEnter New Salary: ");
    scanf("%f", &newSalary);
    ptr->salary = newSalary;
    
    printf("\n--- Updated Employee Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);
    return 0;
}
