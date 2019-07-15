#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    int r_arr[n];
    int j=0;
    r_arr[0] = arr[0];
    j++;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
            continue;
        else
        {
            r_arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
        printf("%d ",r_arr[i]);
	return 0;
}
