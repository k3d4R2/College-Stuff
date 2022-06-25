#include<stdio.h>
int main()
{
    int unit;
    float charge,extraCharge=0, amt,totalCharge;

    printf("\nEnter the unit consumed by customer:");
    scanf("%d",&unit);

    if (unit < 200 )
    {
        charge = 0.50;
        extraCharge = 0;
        amt = unit * charge;
        totalCharge = amt+extraCharge;
    }
    else if (unit >= 200 && unit < 400)
    {
        charge = 0.65;
        extraCharge = 100;
        amt = unit * charge;
        totalCharge = amt+extraCharge;
    }
    else if (unit >= 400 && unit < 600)
    {
        charge = 0.85;
        extraCharge = 230;
        amt = unit * charge;
        totalCharge = amt+extraCharge;
    }
    else
    {
        charge = 1.00;
        extraCharge = 390;
        amt = unit * charge;
        totalCharge = amt+extraCharge;
    }

    printf("Unit Consumed: %d\n", unit);
    printf("Amount Charges per unit: %.2f\n",charge,amt);
    printf("Total Charges: %.2f\n",totalCharge);

    return 0;
}
