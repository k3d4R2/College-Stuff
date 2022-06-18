//Program to check the sum of rows and columns in a matrix , limit of 1000 rows and columns

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[1000][1000], rsum,csum;

    printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);

    printf("Please Enter the Matrix Row and Column Elements \n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    for(rows = 0; rows < i; rows++)
    {
        rsum = 0;
        for(columns = 0; columns < j; columns++)
        {
            rsum = rsum + a[rows][columns];
        }
        printf("The Sum of Elements of Row %d =  %d \n",rows+1, rsum );
    }

    for(columns = 0; columns < i; columns++)
    {
        csum = 0;
        for(rows = 0; rows < j; rows++)
        {
            csum = csum + a[rows][columns];
        }
        printf("The Sum of Elements of Column %d  =  %d \n",columns + 1, csum );
    }

    return 0;
}
