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
    int sum=0;
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		if(i==j)
    			sum = sum + matrix[i][j]; 
		}
	}
	printf("The sum of diagonal elements of the given matrix is: %d",sum);
}
