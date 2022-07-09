#include <stdio.h>

void main()
{
    char str[50];
    int i, l = 0;

    printf("Enter a string : ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    printf("The length of the string is : %d\n", l);
}