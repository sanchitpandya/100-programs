#include<stdio.h>
int main()
{
    int row1,col1,row2,col2;
    printf("Enter the number of rows and columns of the matrix 1: ");
    scanf("%d%d",&row1,&col1);
    int matrix1[row1][col1];
    printf("Enter the elements of the matrix 1: ");
    for(int i=0;i<row1;i++)
    {
       for(int j=0;j<col1;j++)
          scanf("%d",&matrix1[i][j]);
    }
    printf("Enter the number of rows and columns of the matrix 2: ");
    scanf("%d%d",&row2,&col2);
    int matrix2[row2][col2];
    printf("Enter the elements of the matrix 2: ");
    for(int i=0;i<row2;i++)
    {
       for(int j=0;j<col2;j++)
          scanf("%d",&matrix2[i][j]);
    }
    if(row1==row2 && col1==col2)
    {
    	int difference[row1][col1];
	    for(int i=0;i<row1;i++)
	    {
	    	for(int j=0;j<col1;j++)
	           {
	           		difference[i][j] = matrix1[i][j] + matrix2[i][j];
			   }
	    }   
	    for(int i=0;i<row1;i++)
	    {
	    	for(int j=0;j<col1;j++)
	    	{
	    		printf("%d ",difference[i][j]);
			}
			printf("\n");
		}
	}
    else
    printf("\nThe difference of matrices is not possible.");
}
