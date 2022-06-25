#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a number to check if positive: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number is positive\n");
    }
    printf("Enter a number to check whether it's composite: ");
    scanf("%d",&a);
    if(a%2 == 0)
    {
        printf("It is composite\n");
    }
    else
    {
        printf("Not composite\n");
    }
    printf("Enter marks from 0 to 50 to check grade earned: ");
    scanf("%d",&a);
    if(a>= 40)
    {
        printf("A Grade\n");
    }
    else if(a>=30)
    {
        printf("B Grade\n");
    }
    else if(a>=20)
    {
        printf("C Grade\n");
    }
    else
    {
        printf("Fail\n");
    }
    printf("Enter 3 numbers to check which is largest: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=y)
    {
        if(a>=c)
        {
            printf("%d is the largest number.\n",a);
        }
        else
        {
            printf("%d is the largest number.\n",c);
        }
    }
    else
    {
        if(b>=z)
        {
            printf("%d is the largest number.\n",b);
        }
        else
        {
            printf("%d is the largest number.\n",c);
        }
    }
    printf("Enter the week number to get the day: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("Monday\n");
        break;
        case 2:
            printf("Tuesday\n");
        break;
        case 3:
            printf("Wednesday\n");
        break;
        case 4:
            printf("Thursday\n");
        break;
        case 5:
            printf("Friday\n");
        break;
        case 6:
            printf("Saturday\n");
        break;
        case 7:
            printf("Sunday\n");
        break;
        default:
            printf("Invalid input! Please enter week number between 1-7.\n");
    }

}
