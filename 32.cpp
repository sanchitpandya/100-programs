#include<stdio.h>
int main()
{
	int row1,row2,col1,col2;
	printf("Enter the number of rows of 1st matrix: ");
	scanf("%d",&row1);
	printf("Enter the number of columns of 1st matrix: ");
	scanf("%d",&col1);
	int matrix1[row1][col1];
	printf("Enter data of matrix 1: ");
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
			scanf("%d",&matrix1[i][j]);
	}
	printf("Enter the number of rows of 2nd matrix: ");
	scanf("%d",&row2);
	printf("Enter the number of columns of 2nd matrix: ");
	scanf("%d",&col2);
	int matrix2[row2][col2];
	printf("Enter data of matrix 2: ");
	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<col2;j++)
			scanf("%d",&matrix2[i][j]);
	}
	int mul[row1][col2];
	if(col1==row2)
			{
				for(int i=0;i<row1;i++)
				{
					for(int j=0;j<col1;j++)
						{
							mul[i][j]=0;
							for(int k=0;k<row1;k++)
								mul[i][j]+= matrix1[i][k] + matrix2[k][j];
						}
				}
				printf("\nMultiplication of Matrices is: \n");\
				for(int i=0;i<row1;i++)
				{
					for(int j=0;j<col1;j++)
						printf("%d ",mul[i][j]);
					printf("\n");
				}
			}
	else
		printf("\nMultiplication of matrices is not possible!");	
}
