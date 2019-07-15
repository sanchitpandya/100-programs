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
    int pos;
    printf("Enter the desired position to delete the element on the desired position: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++)
        arr[i] = arr[i+1];
    for(int i=0;i<n-1;i++)
        printf("%d " ,arr[i]);
}
