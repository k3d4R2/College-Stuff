#include <stdio.h>
union abc
{
    int integer;
    float decimal;

    char name[20];
};

void main()
{
    union abc u={18,38,"geeksforgeeks"};
    union abc *p=&u;
    printf("\nunion data: \n integer: %d\n" "decimal: %.2f\n name: %s\n",p->integer,p->decimal,p->name);
    printf("Sizeof union: %ld\n", sizeof(u));
}