#include <stdio.h>


int* arrayReturnFunc(int* array)
{
    for (int i = 0; i < 5; ++i)
    {
        printf("%d", *(array + i));
    }
    printf("\n");

    static int returnArray[3] = {7,6,5};
    return returnArray;
}


int main()
{

    int intArray[5] = {0,1,2,3,4};
    printf("%d\n",*(intArray + 1));
    printf("%p\n",intArray + 1);

    int* index1OfArray = intArray;
    int* index2OfArray = intArray + 1;

    *(index2OfArray - 1) = 10;
    int intArray2[5] = {3,4,5,6,7};
    int* paramPointer = intArray2;
    int* returnAddress = arrayReturnFunc(paramPointer);
    for (int i = 0; i < 3; ++i)
    {
        printf("%d",*(returnAddress + i));
    }
    printf("\n");

    return 0;
}