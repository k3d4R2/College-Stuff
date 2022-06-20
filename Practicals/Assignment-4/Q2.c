#include <stdio.h>
void main()
{
    int n,i,mul=1;
    printf("Enter number to find it's factorial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul = mul*i;
    }
    printf("The factorial of %d is: %d\n",n,mul);
}
