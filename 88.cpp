#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    int arr[n];
    for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
            if(max<arr[i])
               max = arr[i];
            if(min>arr[i])
               min = arr[i];
    }
    printf("The maximum element in the array is: %d\n",max);
    printf("The minimum element in the array is: %d\n",min);
}
