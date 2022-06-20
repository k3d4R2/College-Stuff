//Sum of numbers using Recursion
#include<stdio.h>

long int sigma(int n);
int main()
{
    int num=10;
    printf("The sum of numbers from 1 to 10 is: %ld\n",sigma(num));
    return 0;
}
long int sigma(int n)
{
    if(n>=1)
    {
        return n+ sigma(n-1);
    }
    else
    {
        return 0;
    }
}
