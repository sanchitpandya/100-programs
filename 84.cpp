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
    int min,smin;
    if(arr[0]<arr[1])
    {
       min=arr[0];
       smin=arr[1];
    }
    else
    {
       min=arr[1];
       smin=arr[0];
    }
    for(int i=2;i<n;i++)
    {
       if(min>arr[i])
       {
          smin=min;
          min=arr[i];
       }
       else if(smin>arr[i]){
            smin=arr[i];
            }
    }
    printf("The second smallest element in the array is: %d",smin);
}
