#include <stdio.h>


int main()
{
    int a;
    int* b;
    int** c;
    float d;
    a = 5;
    b = &a;
    c = &b;
    d = 1.5;

    printf("address of var: %p      contents of var: %d\n",&a,a);
    printf("address of var: %p      contents of var: %p\n",&b,b);
    printf("address of var: %p      contents of var: %p\n",&c,c);
    printf("address of var: %p      contents of var: %lf\n",&d,d);

    printf("c display stuff\n");

    int** staticCValue = c;


    printf("%d\n",**c++);
    printf("%p\n",c);
    c = staticCValue;
    printf("%d\n",**++c);
    printf("%p\n",c);
    c = staticCValue;
    printf("%d\n",++**c);
    printf("%p\n",c);
    c = staticCValue;
    printf("%d\n",(**c)++);
    printf("%p\n",c);


    printf("address of var: %p      contents of var: %p\n",&c,c);






    int alta = 10;
    int* altb = &a;
    b = &alta;
    c = &altb;

    printf("address of var: %p      contents of var: %d\n",&a,a);
    printf("address of var: %p      contents of var: %p\n",&b,b);
    printf("address of var: %p      contents of var: %p\n",&c,c);
    printf("address of var: %p      contents of var: %lf\n",&d,d);


    float* floatPointer = &d;

    return 0;
}