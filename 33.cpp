#include<stdio.h>
int greatest(int arr[],int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
			max = arr[i];
	}
	return max;
}
int main()
{
	int n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The greatest element in the array is: %d",greatest(a,n));
}
