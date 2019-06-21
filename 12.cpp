#include<stdio.h>
int power_recursion(int x, int y)
{
    if(y==1)
      return x;
    else
      return(x*power_recursion(x,y-1));
}
int main()
{
    int b,p;
    printf("Enter the base and power: ");
    scanf("%d%d",&b,&p);
    printf("\n%d^%d = %d",b,p,power_recursion(b,p));
}
