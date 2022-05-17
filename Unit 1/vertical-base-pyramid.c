/*
*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
*  *  *  *
*  *  *
*  *
*

 */
#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the length of base: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }

        for(i=0;i<n;i++)
        {
            for(j=n-1;j>i;j--)
            {
                printf("*  ");
            }
            printf("\n");
        }
    }
