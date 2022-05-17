#include <stdio.h>
void main()
{
    int i=1,j,n=5;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("*  ");
            j++;
        }
        i++;
        printf("\n");
    }
}