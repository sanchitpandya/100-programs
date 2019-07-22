#include<stdio.h>
int factorial(int n)
{
	int f=1;
	while(n>0)
	{
		f = f * n;
		n--;
	}
	return f;
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int m = num;
	int sum=0,r;
	while(m>0)
	{
		r = m % 10;
		sum = sum + factorial(r);
		m = m / 10;
	}
	if(sum==num)
		printf("The given number is a strong number!");
	else
		printf("The given number is not a strong number!");
}
