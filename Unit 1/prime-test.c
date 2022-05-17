#include <stdio.h>

main() {
    int n, i, c = 0;
    printf("Enter any number n:");
    scanf("%d", &n);


    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            c++;    //we consider a counter c which will check how many times the condition is satisfied
        }
    }

    if (c == 1) {
        printf("n is a Prime number");
    }
    else {
        printf("n is not a Prime number");
    }
    return 0;
}