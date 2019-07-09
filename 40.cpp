#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r,sum = 0;
    int m = n;
    while(m>0)
    {
       r = m%10;
       sum = sum + (r*r*r);
       m = m/10;
    }
    if(n==sum)
      printf("The given number %d is an armstrong number.",n);
    else
      printf("The given number %d is not an armstrong number.",n);
}
