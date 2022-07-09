#include <stdio.h>

int main()
{
    int a[10],n,i;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int max = 0;
    int second_max = 0;

    for( i = 0; i < 10; i++ ) {
        if( a[i] > max ) {
            second_max = max;
            max = a[i];
        } else if( a[i] > second_max ) {
            second_max = a[i];
        }
    }

    printf("\nThe max is: %d\nThe second max is: %d", max, second_max);
    return 0;
}
