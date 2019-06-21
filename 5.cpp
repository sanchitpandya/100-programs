#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int fact=1,i;
	if(n<0)
		printf("\nFactorial of negative number is not defined.");
	else
	{
		if(n==0)
		fact=1;
		else
		{
			for(i=1;i<=n;i++)
				fact = fact*i;
		}
		printf("\nFactorial of %d is %d.",n,fact);
	}
}
