#include <stdio.h>


int main() {
    
    int num1;
    int num2; 
    int num3;
    int num4;

    printf("Enter 4 integers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    // odd plus odd is even, even plus even is even, odd plus even is odd
    // if sum is odd, then first two are even and odd, this logic swaps it so that one and two contain either even or odd numbers only
    if ((num1 + num2)%2 != 0)
    {
        // if num1 and num3 are both same type
        if ((num1 + num3)%2 == 0)
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        else
        {
            int temp = num2;
            num2 = num4;
            num4 = temp;
        }
    }

    int smallestOfFirstPair;
    if (num1 < num2)
    {
        smallestOfFirstPair = num1;
    }
    else smallestOfFirstPair = num2;
    
    int smallestOfSecondPair;
    if (num3 < num4)
    {
        smallestOfSecondPair = num3;
    }
    else smallestOfSecondPair = num4;

    if (smallestOfFirstPair%2 == 0)
    {
        printf("smallest even number:%d \n",smallestOfFirstPair);
        printf("smallest odd number:%d \n",smallestOfSecondPair);
    }
    else
    {
        printf("smallest even number:%d \n",smallestOfSecondPair);
        printf("smallest odd number:%d \n",smallestOfFirstPair);
    }
}