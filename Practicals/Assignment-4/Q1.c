#include <stdio.h>
int forLoop(int n);
int whileLoop(int n);
int dowhileLoop(int n);
void nestedForLoop(int n);
void nestedWhileLoop(int n);
void nestedDoWhileLoop(int n);
int main()
{
    int a,b,c,d,e,f;
    printf("Enter a number to calculate factorial: ");
    scanf("%d",&a);
    printf("The factorial is: %d\n",forLoop(a));
    printf("Enter a number to check the sum of its digits: ");
    scanf("%d",&b);
    printf("The sum of digits is: %d\n", whileLoop(b));
    printf("Enter a number to reverse: ");
    scanf("%d",&c);
    printf("The reverse is: %d\n", dowhileLoop(c));
    printf("Enter number for base of right angle triangle: ");
    scanf("%d",&d);
    nestedForLoop(d);
    printf("Enter number to make square pattern till: ");
    scanf("%d",&e);
    nestedWhileLoop(e);
    printf("Enter number till which to print number pattern: ");
    scanf("%d",&f);
    nestedDoWhileLoop(f);
}
forLoop(int n)
{
    int mul = 1;
    for(int i=1;i<=n;i++)
    {
        mul = mul*i;
    }
    return mul;
}
whileLoop(int n)
{
    int rem,sum=0;
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    return sum;
}
dowhileLoop(int n)
{
    int rem,rev=0;
    do
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    while(n>0);
    return rev;
}
nestedForLoop(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
nestedWhileLoop(int n)
{

    int i=1,j;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            printf("%d ",j);
            j++;
        }
            printf("\n");
            i++;
        }

}
nestedDoWhileLoop(int n)
{
    int i=1,j;
    do
    {
        j=1;
        do
        {
            printf("%d ",j);
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=n);
}
