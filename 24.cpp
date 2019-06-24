#include<stdio.h>
int main()
{
	int a[20],n,j;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nUnsorted array: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nSorted array: ");
	for(int i=1;i<n;i++)
	{
		int k=a[i];
		for(j=i;j>0 && a[j-1]>k;j--)
		{
				a[j]=a[j-1]; 
		}
		a[j]=k; 
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
