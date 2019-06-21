#include<stdio.h>
int factorial(int x)
{
	int f=1;
	if(x==0)
		return 1;
	else
		return(x * factorial(x-1));
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int fact;
	if(n<0)
		printf("\nFactorial of negative number is not defined.");
	else
	{
		fact = factorial(n);
		printf("Factorial of %d is %d.",n,fact);
	}
}
