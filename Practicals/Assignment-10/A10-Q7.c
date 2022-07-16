#include<stdio.h>
struct dist
{
    int ft;
    int in;
};

void
add (struct dist d1, struct dist d2, struct dist *result)
{
    result->ft = d1.ft + d2.ft;
    result->in = d1.in + d2.in;
}

int main()
{
    struct dist d1, d2, result;

    printf("\nEnter distance 1 feet part:");
    getchar();
    scanf("%d", &d1.ft);
    printf("\nEnter distance 1 inch part:");
    getchar();
    scanf("%d", &d1.in);
    printf("\nEnter distance 2 feet part:");
    getchar();
    scanf("%d", &d2.ft);
    printf("\nEnter distance 2 inch part:");
    getchar();
    scanf("%d", &d2.in);

    add(d1, d2, &result);
    printf("\nThe addition result feet part: %d", result.ft);
    printf("\nThe addition result inch part: %d", result.in);

    return 0;
}