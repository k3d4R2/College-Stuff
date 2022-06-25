#include <stdio.h>
int main()
{
    int i,arr[10];
    printf("Enter 10 numbers to make array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("The memory address of element %d is %u\n",arr[i],&arr[i]);
    }
    return 0;
}
