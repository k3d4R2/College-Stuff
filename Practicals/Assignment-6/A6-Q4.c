#include <stdio.h>
int main()
{
int a[100], i, min, max,n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
min = max = a[0];
for (i = 0; i < n; i++) {
if (min > a[i]) {
min = a[i];
}
if (max < a[i]) {
max = a[i];
}
}
printf("\nThe largest element in the array is: %d", max);
printf("\nThe smallest element in the array is: %d", min);

return 0;
}
