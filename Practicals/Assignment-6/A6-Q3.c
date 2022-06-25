#include <stdio.h>

int main()
{
    float A[3][3],B[3][3],C[3][3];
    int i,j;
    printf("Enter 9 elements to make a 3x3 Matrix A: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
    printf("Enter 9 elements to make a 3x3 Matrix B: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&B[i][j]);
        }
    }
    printf("The matrix A is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%.2f ",A[i][j]);
        }
        printf("\n");
    }
    printf("The matrix B is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%.2f ",B[i][j]);
        }
        printf("\n");
    }
    printf("Press 1 to get cell wise addition. 2 for subtraction. 3 for multiplication. 4 for division\n");
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
                    printf("%.2f ",C[i][j]);
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
                    printf("%.2f ",C[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    C[i][j]= A[i][j]*B[i][j];
                }

            }
            printf("The Multiplication matrix is: \n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%.2f ",C[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    C[i][j]= A[i][j]/B[i][j];
                }

            }
            printf("The Division matrix is: \n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%.2f ",C[i][j]);
                }
                printf("\n");
            }
            break;


    }

    return 0;
}
