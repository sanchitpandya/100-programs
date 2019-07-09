#include<stdio.h>
int factorial(int n)
{
    if(n==0)
       return 1;
    else
    {
        int fact=1;
        for(int i=1;i<=n;i++)
                fact = fact * i;
        return fact;
    }
}
int main()
{
    int n,r;
    printf("Enter the value of n and r in nCr: ");
    float ans;
    scanf("%d%d",&n,&r);
    ans = factorial(n)/(factorial(n-r)*factorial(r));
    printf("The value of %dC%d is %f",n,r,ans);
    int x;
    scanf("%d",&x);
}
