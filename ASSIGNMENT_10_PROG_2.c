#include <stdio.h>
float SI(float,float,float);
int main()
{
    float p,r,t,si;
    printf("Enter the Principal Amount = Rs. ");
    scanf("%f",&p);
    printf("Enter the Rate of Interest = ");
    scanf("%f",&r);
    printf("Enter the time = ");
    scanf("%f",&t);
    si=SI(p,r,t);
    printf("The Simple Interest is = Rs. %.2f",si);
    return 0;
}
float SI(float a,float b,float c)
{
    return (a*b*c)/100;
}
