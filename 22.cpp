#include<stdio.h>
int main()
{
	int a[20],n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements in the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nUnsorted array: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nSorted array: ");
	int temp;
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=1;j<n-i;j++)
		{
			if(a[k]>a[j])
			{
				temp=a[k];
				a[k]=a[j];
				a[j]=temp;
			}
			k++;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}
