#include <stdio.h>

int main()
{
    int A[3][3],B[3][3],i,j,C[3][3];
    printf("Enter 9 elements to make a 3x3 Matrix A: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter 9 elements to make a 3x3 Matrix B: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("The matrix A is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("The matrix B is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("Press 1 to get the addition matrix. Press 2 to get subtraction matrix.\n");
    int n;
    scanf("%d",&n);
    switch (n)
    {
        case 1:

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    C[i][j]= A[i][j] + B[i][j];
                }

            }
            printf("The Addition matrix is: \n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d ",C[i][j]);
                }
                printf("\n");
            }


            break;
        case 2:

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    C[i][j]= A[i][j] - B[i][j];
                }

            }
            printf("The Subtraction matrix is: \n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d ",C[i][j]);
                }
                printf("\n");
            }
            break;
    }

    return 0;
}
