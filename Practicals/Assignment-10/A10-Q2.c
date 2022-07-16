#include<stdio.h>
struct q2nest1
{
    char b;
};

struct q2neststruct
{
    int a;
    struct q2nest1 s2;
};
int main()
{
    struct q2neststruct s1;
    struct q2nest1 s2;

    printf("\nEnter a number:");
    scanf("%d", &s1.a);
    printf("\nEnter a character:");
    getchar();
    scanf("%c", &s1.s2.b);

    printf("\nThe value of `a` in structure `s1` is: %d", s1.a);
    printf("\nThe value of `b` in nested structure `s2` of `s1` is: %c", s1.s2.b);

    return 0;
}