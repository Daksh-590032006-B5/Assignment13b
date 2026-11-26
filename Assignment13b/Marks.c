#include <stdio.h>
struct Student
{
    float mark1;
    float mark2;
    float mark3;
    float total;
    float average;
    char grade;
};
int main()
{
    struct Student s;
    struct Student *ptr = &s;
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &ptr->mark1, &ptr->mark2, &ptr->mark3);
    ptr->total = ptr->mark1 + ptr->mark2 + ptr->mark3;
    ptr->average = ptr->total / 3.0;
    if (ptr->average >= 90)
    {
        ptr->grade = 'A';
    }
    else if (ptr->average >= 75)
    {
        ptr->grade = 'B';
    }
    else if (ptr->average >= 60)
    {
        ptr->grade = 'C';
    }
    else if (ptr->average >= 40)
    {
        ptr->grade = 'D';
    }
    else
    {
        ptr->grade = 'F';
    }
    printf("\nTotal Marks: %.2f\n", ptr->total);
    printf("Average Marks: %.2f\n", ptr->average);
    printf("Grade: %c\n", ptr->grade);
    return 0;
}
