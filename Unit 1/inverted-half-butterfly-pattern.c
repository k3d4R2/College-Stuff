/*
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/

#include<stdio.h>
void main()
{
    int i,j,n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf("* ");
        }
        for(j=0;j<2*(i);j++)
        {
            printf("  ");
        }
        for(j=0;j<(n-i);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}