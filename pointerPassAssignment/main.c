#include <stdio.h>


void printaFroma(float a, float* aAdress)
{
    printf("%lf\n", *aAdress);
}
void printaFromb(float* b, float** bAdress)
{
    printf("%lf\n", **bAdress);
}
void printaFromc(float** c, float*** cAdress)
{
    printf("%lf\n", ***cAdress);
}
void printaFromd(void* d, void* dAddress)
{
    printf("%lf\n", ****(float****)dAddress);
}

int main()
{
    float a;
    float* b;
    float** c;
    void* d;


    a = 1.5;
    b = &a;
    c = &b;
    d = &c;

    printaFroma(a,&a);
    printaFromb(b,&b);
    printaFromc(c,&c);
    printaFromd(d,&d);

    return 0;
}

