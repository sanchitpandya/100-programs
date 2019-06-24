#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers to be swapped: ");
	scanf("%d%d",&n1,&n2);
	printf("\nBefore swapping :\n");
	printf("Number 1: %d\n",n1);
	printf("Number 2: %d\n",n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\nAfter swapping :\n");
	printf("Number 1: %d\n",n1);
	printf("Number 2: %d\n",n2);
}
