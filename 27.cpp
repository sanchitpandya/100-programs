#include<stdio.h>
int main()
{
	int a[100][100],rows,columns;
	printf("Enter the number of rows in the matrix: ");
	scanf("%d",&rows);
	printf("Enter the number of columns in the matrix: ");
	scanf("%d",&columns);
	printf("\nEnter the elements in the matrix: ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			scanf("%d",&a[i][j]);		
		}
	}
	int max,least;
	max = a[0][0];
	least = max;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			if(max<a[i][j])
				max = a[i][j]; 
			if(least>a[i][j])
				least = a[i][j];	
		}
	}
	printf("Largest element in the matrix is: %d\n", max);
	printf("Smallest element in the matrix is: %d\n", least);
}
