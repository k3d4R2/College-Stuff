#include <stdio.h>
int main()
{
    int mat[3][3],i,j,rsum=0,csum=0;
    printf("Enter a 3x3 Matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is: \n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            rsum = rsum + mat[i][j];
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            csum = csum + mat[i][j];
        }
    }
    if(csum==rsum)
    {
        printf("The given matrix is magic square");
    }
    else
    {
        printf("Not magic square.");
    }
    return 0;

}