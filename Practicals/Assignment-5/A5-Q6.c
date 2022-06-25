#include <stdio.h>
char uppercase(char c);
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("The uppercase is: %c", uppercase(ch));
}
char uppercase(char c)
{
    return c - 32;
}
