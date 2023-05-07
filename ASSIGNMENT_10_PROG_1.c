#include <stdio.h>
float ar(float);
int main()
{
    float rad,area;
    printf("Enter the radius of the circle = ");
    scanf("%f",&rad);
    area=ar(rad);
    printf("\nThe Area of the Circle of radius %.4f units is %.4f square units\n",rad,area);
    return 0;
}
float ar(float a)
{
    return 3.142*a*a;
}
