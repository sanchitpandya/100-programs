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
    int max,smax;
    if(arr[0]>arr[1])
    {
       max=arr[0];
       smax=arr[1];
    }
    else
    {
       max=arr[1];
       smax=arr[0];
    }
    for(int i=2;i<n;i++)
    {
       if(max<arr[i])
       {
          smax=max;
          max=arr[i];
       }
       else if(smax<arr[i]){
            smax=arr[i];
            }
    }
    printf("The second maximum element in the array is: %d",smax);
}
