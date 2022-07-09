#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i, l = 0;

    printf("Enter a string : ");
    scanf("%s", str);

    printf("The length of string is: %d\n",strlen(str));
}