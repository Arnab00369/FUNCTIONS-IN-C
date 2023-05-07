#include <stdio.h>
void NN(int i);
int main()
{
    int n;
    printf("Enter upto how many you want to print the Odd Natural Numbers = ");
    scanf("%d",&n);
    printf("The First %d Odd Natural Numbers are as follows ::\n",n);
    NN(n);
    return 0;
}
void NN(int i)
{
    int a=1;
      for(int j=1;j<=i;j++)
      {
        printf("%d ",a);
        a+=2;
      }
}
