#include<stdio.h>
struct q4struct
{
    int a;
    int b;
};
int main()
{
    struct q4struct s;

    s = q4func();

    printf("\nThe number in `a` in structure `s` is: %d", s.a);
    printf("\nThe number in `b` in structure `s` is: %d", s.b);

    return 0;
}