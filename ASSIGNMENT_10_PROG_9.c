#include <stdio.h>
int dig(int,int);
int main()
{
    int n,d;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&n);
    printf("Enter a digit to check whether it is present in the given number ::\nDigit = ");
    scanf("%d",&d);
        if(dig(n,d)==1)
        printf("The Digit %d is present in the Number %d",d,n);
        else
        printf("The Digit %d is not present in the Number %d",d,n);
    return 0;
}
int dig(int nn,int dd)
{
  while(nn)
  {
      if(nn%10==dd)
        return 1;
      nn/=10;
  }
  return 0;
}
