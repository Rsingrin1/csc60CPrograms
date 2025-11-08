#include <math.h>
#include <stdio.h>


#define VENDINGCOL 0
#define LOANCOL 1
void vendingMachine(double historyArray[][2], int numIterations)
{
    int price;
    printf("enter price of item in cents: ");
    scanf("%d", &price);
    if (price < 25 || price > 100 || price % 5 != 0)
    {
        
        do 
        {
            printf("Invalid price!\n");
            scanf("%d", &price);
        } while (price < 25 || price > 100 || price % 5 != 0);
    }

    //assumes user gives a dollar
    int change = 100 - price;
    int quarters = change / 25;
    change = change % 25;
    int dimes = change / 10;
    change = change % 10;
    int nickels = change / 5;
    change = change % 5;
    int pennies = change;

    printf("Your change is %d quarters, %d dimes, %d nickels, and %d pennies.\n", quarters, dimes, nickels, pennies);
    historyArray[numIterations][VENDINGCOL] = (double)price/100;
}
void loan(double historyArray[][2], int numIterations)
{
    
    double interestRate;
    double numberOfPayments;
    double loanAmount;

    printf("Enter loan amount: ");
    scanf("%lf", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%lf", &interestRate);
    printf("Enter number of payments: ");
    scanf("%lf", &numberOfPayments);
    //converting interest rate to monthly
    interestRate = (interestRate / 100) / 12;

    double monthlyPayment = loanAmount*(interestRate*pow((1+interestRate),numberOfPayments)/(pow((interestRate + 1),numberOfPayments) - 1));
    printf("%-50s $ %20f\n", "Loan Amount:", loanAmount);
    printf("%-50s %20f\n", "Monthly Interest Rate:", interestRate * 100);
    printf("%-50s %20d\n", "Number Of Payments:", (int)numberOfPayments);
    printf("%-50s $ %20f\n", "Monthly Payment:", monthlyPayment);
    printf("%-50s $ %20f\n", "Amount Paid Back:", monthlyPayment*numberOfPayments);
    printf("%-50s $ %20f\n", "Interest Paid:", (monthlyPayment*numberOfPayments)-loanAmount);

    historyArray[numIterations][LOANCOL] = monthlyPayment;

}
