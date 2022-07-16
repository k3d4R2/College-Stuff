#include<stdio.h>
struct q1struct
{
    int a;
    char b;
};
int main()
{
    struct q1struct s1;

    printf("Enter a number:");
    scanf("%d", &s1.a);
    printf("\nEnter a character:");
    getchar();
    scanf("%c", &s1.b);

    printf("\nThe value of `a` in structure `s1` is: %d", s1.a);
    printf("\nThe value of `b` in structure `s1` is: %c", s1.b);

    return 0;

}