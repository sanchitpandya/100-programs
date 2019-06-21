#include<stdio.h>
void swap_call_by_reference(int *a, int *b)
{
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;
     printf("NUMBER 1: %d\n",*a);
     printf("NUMBER 2: %d\n",*b);
}
int main()
{
    int x,y;
    printf("Enter two numbers to be swapped");
    scanf("%d%d",&x,&y);
    printf("\n Before swapping: \n");
    printf("NUMBER 1: %d\n",x);
    printf("NUMBER 2: %d\n",y);
    printf("After swapping: \n");
    swap_call_by_reference(&x,&y);
}
