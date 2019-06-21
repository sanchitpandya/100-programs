#include<stdio.h>
int gcd(int n1, int n2)
{
	if(n2!=0)
		return(gcd(n2,n1%n2));
	else
		return n1;
}
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("GCD of %d and %d is %d.",x,y,gcd(x,y));
}
