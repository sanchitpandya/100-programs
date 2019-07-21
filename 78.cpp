#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&row,&col);
    int matrix[row][col];
    printf("Enter the elements of the matrix: ");
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
          scanf("%d",&matrix[i][j]);
    }
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		if(j>i)
    			matrix[i][j]=0; 
		}
	}
	printf("Lower Triangular Matrix: \n");
	for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
          printf("%d ",matrix[i][j]);
        printf("\n");
    }
}
