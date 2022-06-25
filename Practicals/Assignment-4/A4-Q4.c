#include <stdio.h>
int main()
{
    int count,i,j,n;
    printf("Enter number till which to find primes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count = 0;
        for(j=2;j<i;j++)
        {
            if (i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && i!=1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
