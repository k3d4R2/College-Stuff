//Program to check the sum of rows and columns in a matrix

#include<stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], rsum,csum;

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
        printf("The Sum of Elements of a Rows in a Matrix =  %d \n", rsum );
    }

    for(columns = 0; columns < i; columns++)
    {
        csum = 0;
        for(rows = 0; rows < j; rows++)
        {
            csum = csum + a[rows][columns];
        }
        printf("The Sum of Elements of a Columns in a Matrix =  %d \n", csum );
    }

    return 0;
}
