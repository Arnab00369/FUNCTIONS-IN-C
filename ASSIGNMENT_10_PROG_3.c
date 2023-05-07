#include <stdio.h>
int even(int);
int odd(int);
int main()
{
    int n;

    printf("Enter a Number = ");
    scanf("%d",&n);
    if(n%2==0)
      printf("\nOutput for Even Number = %d\n",even(n));
    else
       printf("\nOutput for Odd Number = %d\n",odd(n));
    return 0;
}
int even(int a)
{
    return 1;
}
int odd(int a)
{
    return 0;
}
