#include <stdio.h>
void main()
{
    int i,j,n=10;
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        for(j=0;j<2*(n-i);j++)
        {
            printf("  ");
        }
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}