#include <stdio.h>

int main()
{
    int x,y,a,b;
    printf("Enter numbers: ");
    scanf("%d %d",&x,&y);
    a =  (x+y) / (x - y);
    b = (x+y)*(x-y);
    printf("%d %d",a,b);
    
    return 0;
}
