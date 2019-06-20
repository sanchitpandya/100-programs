#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int r,rev=0;
    while(n!=0)
    {
       r=n%10;
       rev=rev*10 + r;
       n=n/10;
    }
    printf("\nReverse of the number is %d",rev);
}
