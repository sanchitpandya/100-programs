#include <stdio.h>
using namespace std; 
int main( )
{
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
    int k = 1;
    printf("Floyd''s triangle is: \n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
	    printf( "%d ",k++);
	    printf( "\n");
    }
    return 0;
}
