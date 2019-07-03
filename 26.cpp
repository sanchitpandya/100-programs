#include<stdio.h>
int main()
{
	int a[100],n;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max,least;
	max = a[0];
	least = max;
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
			max = a[i]; 
		if(least>a[i])
			least = a[i];
	}
	printf("Largest element in the array is: %d\n", max);
	printf("Smallest element in the array is: %d\n", least);
}
