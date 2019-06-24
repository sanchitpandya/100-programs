#include<stdio.h>
int main()
{
	int a[20],n,k;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nUnsorted array: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nSorted array: ");
	for(int i=0;i<n;i++)
	{
		int temp=i;
		for(int j=1+i;j<n;j++)
		{
			if(a[temp]>a[j])
			{
				temp=j;
			}
		}
		k=a[i];
		a[i]=a[temp];
		a[temp]=k;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}
