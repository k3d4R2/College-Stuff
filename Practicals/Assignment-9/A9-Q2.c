#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    int i,n;

    printf("Enter the string: ");
    scanf("%s",str1);
    n = strlen(str1);
    //Reverse string
    for(i=0;i<n;i++)
    {
        str2[i] = str1[n-1-i];
    }
    int k = strcmp ( str1,str2); //Comparing with reverse
    if(k==0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
}

