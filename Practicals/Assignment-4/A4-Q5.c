#include <stdio.h>
void main()
{
    int i,j,n=4,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}
