#include <stdio.h>
int fact(int);
int permut(int,int);
int main()
{
    int n,r;
    printf("Program to calculate the number of arrangements one can make from N items and R selected at a time ::\nEnter the value of N = ");
    scanf("%d",&n);
    printf("Enter the value of R = ");
    scanf("%d",&r);
    printf("\n\nOUTPUT ::\nArrangements of %d items and %d selected at a time = %d P %d =  %d\n",n,r,n,r,permut(n,r));
    return 0;
}
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    f=f*i;
    return f;
}
int permut(int n,int r)
{
    return (fact(n)/fact(n-r));
}

