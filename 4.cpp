#include<stdio.h>
int main()
{
    int n;
    printf("How many terms you want in fibonacci series");
    scanf("%d",&n);
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    int i;
    for(i=1;i<=n-2;i++)
    {
       c=a+b;
       a=b;
       b=c;
       printf("%d ",c);
    }
}
