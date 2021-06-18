#include <stdio.h>

int main(void)
{
  //assigning variables
  int choice = 0, donationCount = 0, investmentCount = 0;
  float orgFunds = 0, donationAmount = 0, totalFunds = 0, investment = 0, oldAndNewFunds = 0;

  //inputs
  printf("Welcome!\nWhat is the initial balance of the fund?\n");
  scanf("%f", &orgFunds);
  printf("\n");

  while(choice != 4)
  {
    printf("What would you like to do?\n    1 - Make a donation\n    2 - Make an investment\n    3 - Print balance of fund\n    4 - Quit\n");
    scanf("%d", &choice);
    printf("\n");

    //choice outputs
    if(choice == 1)
    {
      printf("How much would you like to donate?\n");
      scanf("%f", &donationAmount);
      printf("\n\n");
      totalFunds = totalFunds + donationAmount;
      donationCount++;
    }

    if(choice == 2)
    {
      printf("How much would you like to invest?\n");
      scanf("%f", &investment);
      printf("\n");

      if(investment > totalFunds)
      {
        printf("The largest investment you can make is $%.2f.\n\n\n", totalFunds);
      }

      if(investment <= totalFunds)
      {
        totalFunds -= investment;
        investmentCount++;
        printf("\n");
      }
    }

    if(choice == 3)
    {
      oldAndNewFunds = totalFunds + orgFunds;
      printf("The current balance is $%.2f.\nThere have been %d donations and %d investments.\n\n\n", oldAndNewFunds, donationCount, investmentCount);
    }

    if(choice == 4)
    {
      oldAndNewFunds = totalFunds + orgFunds;
      printf("The final balance is $%.2f.\nThere were %d donations and %d investments.\n", oldAndNewFunds, donationCount, investmentCount);
    }
  }

  return 0;
}
