#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number to calculate factorial: ");
    scanf("%d",&a);
    int mul = 1;
    for(int i=1;i<=a;i++)
    {
        mul = mul*i;
    }
    printf("Factorial is: %d\n",mul);
    printf("Enter a number to check the sum of its digits: ");
    scanf("%d",&a);
    int rem,sum=0;
    while(a>0)
    {
        rem = a%10;
        sum = sum + rem;
        a = a/10;
    }
    printf("The sum of digits is: %d\n", sum);
    printf("Enter a number to reverse: ");
    scanf("%d",&a);
    int rem1,rev=0;
    do
    {
        rem1 = a%10;
        rev = rev*10 + rem1;
        a = a/10;
    }
    while(a>0);
    printf("The reverse is: %d\n", rev);
    printf("Enter number for base of right angle triangle: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Enter number to make square pattern till: ");
    scanf("%d",&a);
    int i,j;
    while(i<=a)
    {
        int j=1;
        while(j<=a)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("Enter number till which to print number pattern: ");
    scanf("%d",&a);
    int i1=1,j1;
    do
    {
        j1=1;
        do
        {
            printf("%d ",j1);
            j1++;
        }while(j1<=i1);
        printf("\n");
        i1++;
    }while(i1<=a);
}
