#include <stdio.h>

int main()
{
        int votes[6] = { 0, 0, 0, 0, 0, 0 }, cand = 0, i;
        char keepgoing = 'y';
while (keepgoing == 'y') 
{
printf("Enter your candidate:");
scanf("%d", &cand);
switch (cand)
{
case 1:
printf("\nEnter the candidate 1 votes:");
scanf("%d", &votes[0]);
votes[0] += votes[0];
break;
case 2:
printf("\nEnter the candidate 2 votes:");
scanf("%d", &votes[1]);
votes[1] += votes[1];
break;
case 3:
printf("\nEnter the candidate 3 votes:");
scanf("%d", &votes[2]);
votes[2] += votes[2];
break;
case 4:
printf("\nEnter the candidate 4 votes:");
scanf("%d", &votes[3]);
votes[3] += votes[3];
break;
case 5:
printf("\nEnter the candidate 5 votes:");
scanf("%d", &votes[4]);
votes[4] += votes[4];
break;
default:
printf("\nBallot spoilt.");
printf("\nEnter the spoilt ballot votes:");
scanf("%d", &votes[5]);
votes[5] += votes[5];
}
printf("\nDo you want to enter more votes?:");
getchar();
scanf("%c", &keepgoing);
}
printf("The votes are:");
for (i = 0; i < 6; i++) {
if (i == 5) {
printf("\nThe spoilt ballot votes are: %d", votes[5]);
break;
}
printf("\n The votes for candidate %d are: %d", i+1, votes[i]);
}
return 0;
}
