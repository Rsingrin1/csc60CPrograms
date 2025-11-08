#include <stdio.h>
//#include <math.h>
#include "main.h"

#define VENDING 1
#define LOAN 2
#define DISPLAY 3
#define QUIT 4


int menu();
void selection(int choice, double historyArray[][2],char choiceTypeArray[], int* numIterations);

int main() {
    
    int choice = 0;
    double historyArray[5][2];
    char choiceTypeArray[5];
    int numIterations = 0;


    do 
    {
        choice = menu();
        selection(choice,historyArray,choiceTypeArray,&numIterations);
    } while(choice != QUIT);




    return 0;
}





int menu()
{
    printf("1) Vending Machine\n"
            "2) Loan\n"
            "3) Display\n"
            "4) Quit\n");
    int userState;
    scanf("%d", &userState);
    return userState;
}


void selection(int choice, double historyArray[][2],char choiceTypeArray[] ,int* numIterations)
{

    if (*numIterations >= 5 && (choice != QUIT && choice != DISPLAY))
        {
            printf("you are out of iterations, choose the quit option\n");
            return;
        }
    switch(choice)
    {
        

        case VENDING:
            vendingMachine(historyArray,*numIterations);
            choiceTypeArray[*numIterations] = 'V';
            *numIterations += 1;
            break;
        case LOAN:
            loan(historyArray,*numIterations);
            choiceTypeArray[*numIterations] = 'L';
            *numIterations += 1;
            break;
        case DISPLAY:
            display(historyArray,choiceTypeArray,*numIterations);
            break;
        case QUIT:
            double grandTotal;
            for (int i = 0; i < *numIterations; ++i)
            {
                grandTotal += historyArray[i][choiceTypeArray[i] == 'V' ? 0:1];
            }
            printf("Grand total: %.2lf\n",grandTotal);
            break;
        default:
            printf("Invalid option, please try again.\n");
            break;
    }
}
