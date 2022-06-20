#include <stdio.h>
void main()
{
    int temp;
    printf("Enter the temperature in centigrade: ");
    scanf("%d",&temp);
    if(temp>=40)
    {
        printf("Its very hot");
    }
    else if(temp>=30)
    {
        printf("Its hot");
    }
    else if(temp>=20)
    {
        printf("Normal");
    }
    else if(temp>=10)
    {
        printf("Cold");
    }
    else if(temp>=0)
    {
        printf("Very Cold weather");
    }
    else
    {
        printf("Freezing weather");
    }
}
