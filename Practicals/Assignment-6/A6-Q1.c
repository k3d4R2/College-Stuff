#include <stdio.h>

int main()
{
    int a[3];
    int b[3][3];
    int c[3][3][3];
    int i, j, k;

    // 1D
    for (i = 0; i < 3; i++) {
        printf("Enter the numbers for array a[%d]:", i);
        scanf("%d", &a[i]);
    }
    //2D
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nEnter the number for array b[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //3D
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("\nEnter the numbers for array c[%d][%d][%d]", i, j, k);
                scanf("%d", &c[i][j][k]);
            }
        }
    }

    return 0;
}