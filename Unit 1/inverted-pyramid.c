#include <stdio.h>
void main()
{
    int i,j,n=4;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=i;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}