#include <stdio.h>
int main()
{
    int arr[100],i,j,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter an array of numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("The non repeating elements are: ");
    for(i=0;i<n;i++)
    {
        for(j=0;i<n;j++)
        {
            if(arr[i]==arr[j] && i != j)
            {
                break;
            }
        }
        if(j==n)
        {
            printf(" %d ",arr[i]);
        }
    }
    return 0;
}