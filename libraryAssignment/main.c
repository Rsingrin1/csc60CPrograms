#include <stdio.h>
#include <math.h>

double area(double a, double b);

int main()
{
    double a,b;
    printf("input a:");
    scanf("%lf",&a);
    printf("input b:");
    scanf("%lf",&b);
    double hypotenuse = sqrt(pow(a,2) + pow(b,2));
    printf("The length of the hypotenuse is: %.2lf\n", hypotenuse);

    printf("The area of the triangle is: %lf\n", area(a,b));


    return 0; 


}