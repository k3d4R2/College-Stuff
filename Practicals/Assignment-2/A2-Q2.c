#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers to carry out arithmetic operations: ");
    scanf("%d %d",&x,&y);
    printf("The addition is: %d\n",x+y);
    printf("The subtraction is: %d\n",x-y);
    printf("The multiplication is: %d\n",x*y);
    printf("The division is %d\n",x/y);
    printf("The modulus is: %d\n",x%y);
    printf("The increment is %d %d respectively\n",++x,++y);
    printf("Enter two numbers to carry out logical and relational operations: ");
    scanf("%d %d",&x,&y);
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
    printf("Enter two numbers to carry out bitwise operators: ");
    scanf("%d %d",&x,&y);
    printf("%d | %d is: %d\n",x,y,x|y);
    printf("%d & %d is: %d\n",x,y,x&y);
    return 0;
}
