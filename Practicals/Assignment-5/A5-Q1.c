//1. Write a sample C program to illustrate Function in C.
#include<stdio.h>
int add(int x,int y);
void hello();
int main()
{
    int a,b;
    printf("Enter two numbers to see the addition: ");
    scanf("%d %d",&a,&b);
    printf("The sum is: %d\n",add(a,b));
    hello();
    return 0;
}
int add(int x, int y) 
{
    return x + y;
}
void hello()
{
    printf("Hello\n");
}
