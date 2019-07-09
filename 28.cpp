#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++)
	{
		int val=1;
		for(int j=1;j<=rows-i;j++)
		printf(" ");
		for(int k=0;k<=i;k++)
		{
			if(k==0 || i==0)
				val = 1;
            else
                val = val*(i-k+1)/k;  //calculate the coefficient
            printf("%d ",val);
		}
		printf("\n");
	}
}
