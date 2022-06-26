#include <stdio.h>
int main()
{
    int i,arr[10],revarr[10];
    printf("Enter 10 elements in an array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<10;i++)
    {
        revarr[i]=arr[9-i];
    }
    printf("\nThe reverse array is: \n");
    for(i=0;i<10;i++)
    {
        printf("%d ",revarr[i]);
    }
}