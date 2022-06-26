#include <stdio.h>
int main()
{
    int i,arr[10],pos[10],neg[10],zero[10];
    int poscount=0,negcount=0,zerocount=0;
    printf("Enter 10 integers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            pos[poscount]=arr[i];
            poscount++;
        }
        else if(arr[i]<0)
        {
            neg[negcount]=arr[i];
            negcount++;
        }
        else
        {
            zero[zerocount]=arr[i];
        }
    }
    printf("\nThe array of positive elements is: ");
    for(i=0;i<poscount;i++)
    {
        printf("%d ",pos[i]);
    }
    printf("\nThe array of negative number is: ");
    for (i=0;i<negcount;i++)
    {
        printf("%d ",neg[i]);
    }
    printf("\nThe array of zero elements is: ");
    for(i=0;i<zerocount;i++)
    {
        printf("%d ",zero[i]);
    }

}