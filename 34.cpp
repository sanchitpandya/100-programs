#include<stdio.h>
void transpose(int row, int col, int arr[10][10])
{
	int transpose[col][row];
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			transpose[i][j] = arr[j][i];
		}
	}
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
			printf("%d\t",transpose[i][j]);
		printf("\n");
	}
}
int main()
{
	int r,c;
	printf("Enter the rows and columns of the matrix: ");
	scanf("%d%d",&r,&c);
	int matrix[10][10];
	printf("Enter the elements of the matrix: ");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			scanf("%d",&matrix[i][j]);
	}
	printf("\nBefore transpose\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
	printf("\nAfter transpose\n");
	transpose(r,c,matrix);
}
