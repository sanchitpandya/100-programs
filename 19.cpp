#include<stdio.h>
int main()
{
	int a[100],n,search;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter the element to be searched: ");
	scanf("%d",&search);
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(search==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Search element found!");
	else
		printf("Search element not found!");
}
