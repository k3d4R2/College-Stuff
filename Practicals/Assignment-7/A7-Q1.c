#include <stdio.h>

int main()
{
int votes[6] = {0, 0, 0, 0, 0, 0}, voters, cand = 0, i;
printf("Enter number of voters: ");
scanf("%d", &voters);
while (voters > 0)
{
printf("Type your vote : ");
scanf("%d",&cand);
if(cand<6 && cand>0){
votes[cand]++;
}else{
votes[0]++;
}
voters--;
}
printf("The votes are:");
for (i = 0; i < 6; i++)
{
if (i == 0)
{
printf("\n spoilt ballot: %d", votes[0]);
}else{
printf("\n The votes for candidate %d are: %d ", i, votes[i]);
}
}
return 0;
}`
