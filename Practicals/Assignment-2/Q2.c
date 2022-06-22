#include<stdio.h>
void arithmeticOps(int x,int y);
void relationalOps(int x,int y);
void logicalOps(int x,int y);
void bitwiseOps(int x,int y);
int main()
{
    int a,b;
    printf("Enter two numbers to carry out arithmetic operations: ");
    scanf("%d %d",&a,&b);
    arithmeticOps(a,b);
    printf("Enter two numbers to carry out logical operations: ");
    scanf("%d %d",&a,&b);
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
void logicalOps(int x,int y)
{

}
