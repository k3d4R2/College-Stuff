#include <stdio.h>
void main()
{
    int m,p,c;
    printf("Enter marks in Maths, Physics and Chemistry: ");
    scanf("%d %d %d",&m,&p,&c);
    if(m>=65 && p>=55 && c>=50)
    {
        printf("Eligible for admission");
    }
    else if(m+p+c>=190 || m+p>=140)
    {
        printf("Eligible for admission");
    }
    else
    {
        printf("Not eligible for admission");
    }
}
