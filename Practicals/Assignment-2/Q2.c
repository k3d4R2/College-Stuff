#include<stdio.h>
void arithmeticOps(int x,int y);
void logicalRelationalOps(int x,int y);
void bitwiseOps(int x,int y);

int main()
{
    int a,b;
    printf("Enter two numbers to carry out arithmetic operations: ");
    scanf("%d %d",&a,&b);
    arithmeticOps(a,b);
    printf("Enter two numbers to carry out logical and relational operations: ");
    scanf("%d %d",&a,&b);
    logicalRelationalOps(a,b);
    printf("Enter two numbers to carry out bitwise operators: ");
    scanf("%d %d",&a,&b);
    bitwiseOps(a,b);
    return 0;
}
void arithmeticOps(int x,int y)
{
    printf("The addition is: %d\n",x+y);
    printf("The subtraction is: %d\n",x-y);
    printf("The multiplication is: %d\n",x*y);
    printf("The division is %d\n",x/y);
    printf("The modulus is: %d\n",x%y);
    printf("The increment is %d %d respectively\n",++x,++y);
}
void logicalRelationalOps(int x,int y)
{
    if(x>y && x>0)
    {
        printf("%d is greater than %d and 0\n",x,y);
    }
    else if(x<y && x ==0)
    {
        printf("%d is lesser than %d and 0\n",x,y);
    }
    else if(x>y || x>0)
    {
        printf("%d is greater than %d or greater than 0\n",x,y);
    }
}
void bitwiseOps(int x,int y)
{
    printf("%d | %d is: %d\n",x,y,x|y);
    printf("%d & %d is: %d\n",x,y,x&y);
}
