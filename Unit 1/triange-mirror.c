#include <stdio.h>
void main()
{
    int i,j,n=5;
    for(i=0;i<n+1;i++)
    {
        for(j=i;j<n;j++)
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