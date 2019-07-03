#include<stdio.h>
int main()
{
	int a[20],n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements in the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int search;
	printf("Enter the element to be searched in the array: ");
	scanf("%d",&search);
	int begin,end,mid;
	begin = 0;
	end = n-1;
	mid = (begin+end)/2;
	while(begin<=end)
	{
		if(search>a[mid])
			begin = mid + 1;
		else
		{
			if(a[mid]==search)
			{
				printf("%d found!",search);
				break;
			}
			else
				end = mid - 1;
		}
		mid = (begin+end)/2;
	}
	if(begin>end)
	printf("%d not found!",search);
}
