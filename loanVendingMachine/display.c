#include <stdio.h>

void display(double historyArray[][2],char choiceTypeArray[] , int numIterations)
{
    double vendingSum = 0;
    double loanSum = 0;
    printf("Vending         Payment\n");
    for (int i = 0; i < numIterations; ++i)
    {
        int choice = choiceTypeArray[i] == 'V' ? 0 : 1;
        if (choice==0)
        {
            vendingSum += historyArray[i][choice];
            printf("$%.2lf\n",historyArray[i][0]);
        }
        else 
        {
            loanSum += historyArray[i][choice];
            printf("                $%.2lf\n",historyArray[i][1]);
        }
        


        //printf("thingy %.4lf\n", historyArray[i][choice]);
    }
    printf("================================================\n");
    printf("TOTAL: $%.2lf       %.2lf\n",vendingSum,loanSum);

}


