#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount = amount - note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount = amount - note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount = amount - note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount = amount - note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount = amount - note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount = amount - note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount = amount - note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    printf("Number of 500 Rs notes = %d\n", note500);
    printf("Number of 100 Rs notes = %d\n", note100);
    printf("Number of 50 Rs notes = %d\n", note50);
    printf("Number of 20 Rs notes = %d\n", note20);
    printf("Number of 10 Rs notes = %d\n", note10);
    printf("Number of 5 Rs coins= %d\n", note5);
    printf("Number of 2 Rs coins = %d\n", note2);
    printf("Number of 1 Rs coins = %d\n", note1);

    return 0;
}
