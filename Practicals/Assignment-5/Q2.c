#include<stdio.h>

int sum(int x,int y);  //With argument and return value
void sub(int x,int y); //With argument without return value
void hello();          //Without argument without return value
int mult();            //Without argument with return value


int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The sum is: %d\n",sum(a,b));
    sub(a,b);
    hello();
    printf("%d\n",mult());
    
}
int sum(int x,int y)
{
    return x +y;
}
void hello()
{
    printf("Hello Im a function without argument and return value\n");
}
int mult()
{
    int p,q;
    printf("This is multiplication function, enter two numbers to multiply: ");
    scanf("%d %d",&p,&q);
    return p*q;
}
void sub(int x,int y)
{
    int s = x -y;
    printf("The subtraction is: %d\n",x-y);
}