#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter number of integers: ");
    scanf("%d",&n);
    int *ptr=(int*) malloc(n* sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not available");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter an integer: ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("Integer is: %d\n",*(ptr+i));
    }
    return 0;
}