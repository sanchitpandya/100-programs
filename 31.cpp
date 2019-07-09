#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n>0)
	{
		int sum=0;
		while(n>0)
		{
			sum = sum + n%10;
			n = n / 10;
		}
		printf("\nThe sum is %d.",sum);
	}
	else
		printf("The number is not a positive integer.");
}
