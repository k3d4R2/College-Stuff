#include<stdio.h>

struct q5cric
{
    char cricname[20];
    int cricruns;
    int cricwickets;
};

int main()
{
    struct q5cric c1;
    printf("\nEnter the cricketer's name:");
    getchar();
    fgets(c1.cricname, 20, stdin);
    printf("\nEnter the cricketer's runs scored:");
    scanf("%d", &c1.cricruns);
    printf("\nEnter the cricketer's wickets taken:");
    scanf("%d", &c1.cricwickets);

    printf("\nThe cricketer's record:");
    printf("\n\tName: %s", c1.cricname);
    printf("\n\tRuns: %d", c1.cricruns);
    printf("\n\tWickets: %d", c1.cricwickets);

    return 0;
}