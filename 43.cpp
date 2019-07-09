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
    int flag=0;
    if(row==col)
    {
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
           if(matrix[i][j]!=matrix[j][i])
           {
              flag=1;
              break;
           }
      }   
      if(flag==0)
        printf("\nThe given matrix is a symmetric matrix.");
      else
        printf("\nThe given matrix is not a symmetric matrix.");
    }
    else
    printf("\nThe given matrix is not a symmetric matrix.");
}
