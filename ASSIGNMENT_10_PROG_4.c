#include <stdio.h>
void NN(int i);
int main()
{
    int n;
    printf("Enter upto which you want to print the Natural Numbers = ");
    scanf("%d",&n);
    printf("The First %d Natural Numbers are as follows ::\n",n);
    NN(n);
    return 0;
}
void NN(int i)
{
      for(int j=1;j<=i;j++)
        printf("%d ",j);
}
