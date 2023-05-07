#include <stdio.h>
void primefac(int a);
int main()
{
    int n;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&n);
    printf("The Prime Factors of %d are :: ",n);
    primefac(n);
    return 0;
}
void primefac(int a)
{
    for(int i=2;i<=a;i++)
   {
       while(a%i==0)
       {
           printf("%d ",i);
           a/=i;
       }
   }
}
