#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	int *ptr;
	ptr = (int*)malloc(n*sizeof(int));
	printf("Enter the elements of the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",ptr+i);
	int sum=0;
	for(int i=0;i<n;i++)
		sum += *(ptr+i);
	printf("Sum of all the elements present in the array is: %d",sum);
}
