#include <stdio.h>

void ispositive(int n);       //If statement
void isComposite(int n);        //If Else statement
void grade(int n);              //If Else ladder
void whichLargest(int x,int y,int z);          //Nested If Else
void whichDay(int n);           //Switch Case

int main()
{
    int a,b,c;
    printf("Enter a number to check if positive: ");
    scanf("%d",&a);
    ispositive(a);
    printf("Enter a number to check whether it's composite: ");
    scanf("%d",&a);
    isComposite(a);
    printf("Enter marks from 0 to 50 to check grade earned: ");
    scanf("%d",&a);
    grade(a);
    printf("Enter 3 numbers to check which is largest: ");
    scanf("%d %d %d",&a,&b,&c);
    whichLargest(a,b,c);
    printf("Enter the week number to get the day: ");
    scanf("%d",&a);
    whichDay(a);
}
void ispositive(int n)
{
    if(n>0)
    {
        printf("The number is positive\n");
    }
}
void isComposite(int n)
{
    if(n%2 == 0)
    {
        printf("It is composite\n");
    }
    else
    {
        printf("Not composite\n");
    }
}
grade(int n)
{
    if(n>= 40)
    {
        printf("A Grade\n");
    }
    else if(n>=30)
    {
        printf("B Grade\n");
    }
    else if(n>=20)
    {
        printf("C Grade\n");
    }
    else
    {
        printf("Fail\n");
    }
}
whichLargest(int x,int y,int z)
{
    if(x>=y)
    {
        if(x>=z)
        {
            printf("%d is the largest number.\n",x);
        }
        else
        {
            printf("%d is the largest number.\n",z);
        }
    }
    else
    {
        if(y>=z)
        {
            printf("%d is the largest number.\n",y);
        }
        else
        {
            printf("%d is the largest number.\n",z);
        }
    }
}
whichDay(int n)
{
    switch(n)
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
