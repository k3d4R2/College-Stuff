#include<stdio.h>
struct q3struct
{
    int a;
    int b;
    char c;
};
int main()
{
    struct q3struct s1[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter a number for structure s1[%d]:", i+1);
        getchar();
        scanf("%d", &s1[i].a);
        printf("\nEnter another number for structure s1[%d]:", i+1);
        getchar();
        scanf("%d", &s1[i].b);
        printf("\nEnter a character for structure s1[%d]:", i+1);
        getchar();
        scanf("%c", &s1[i].c);
    }
    for (i = 0; i < 5; i++) {
        printf("\nThe number in `a` in structure s1[%d] is: %d", i+1, s1[i].a);
        printf("\nThe number in `b` in structure s1[%d] is: %d", i+1, s1[i].b);
        printf("\nThe character in `c` in structure s1[%d] is: %c", i+1, s1[i].c);
    }

    return 0;
}