/*   *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/
#include <stdio.h>
void main()
{
    int i,j,n=5;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=i;j<n;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}