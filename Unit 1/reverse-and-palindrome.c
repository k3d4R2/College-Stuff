//Program to give the reverse of an integer and check whether it's a palindrome
#include <stdio.h>
int main()
{
    int num, rev=0, rem, b;
    printf("Enter the number: ");
    scanf("%d", &num);
    b = num;
    while (num>0){
        rem = num%10;//
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("The reverse is: %d\n", rev);

    if(rev ==b){
        printf("The number is a palindrome");
    }
    else{ printf("The number is not a palindrome");}

    return 0;
}