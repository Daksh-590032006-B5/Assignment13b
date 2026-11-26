#include<stdio.h>
int cube(int x)
{
    int c=x*x*x;
    return c;
}
int square(int a)
{
    int s=a*a;
    return s;
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int (*op[3])(int);
    op[0]=cube;
    op[1]=square;
    op[2]=fact;
    printf("Cube of %d is %d\n",num,op[0](num));
    printf("Square of %d is %d\n",num,op[1](num));
    printf("Factorial of %d is %d\n",num,op[2](num));
}