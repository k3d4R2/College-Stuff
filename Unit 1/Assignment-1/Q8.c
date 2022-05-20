/*8. Write a program to show even numbers in between 1 to 10 using
increment operator (don’t use the decision making statements like if-else).*/
#include <stdio.h>
void main()
{
    int i;
    for(i=2;i<=10;i+=2)
    {
        printf("%d\n", i);
    }
}