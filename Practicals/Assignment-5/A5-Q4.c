//Factorial using Recursion
#include<stdio.h>

long int factorial(int n);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("The factorial is: %ld\n",factorial(num));
    return 0;
}
long int factorial(int n)
{
    if(n>=1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
