#include<stdio.h>
int main()
{
    int m;
    printf("Enter marks: ");
    scanf("%d",&m);
    if(m>=60)
       printf("\nFIRST");
    else
    {
        if(m>=50 && m<60)
           printf("\nSECOND");
        else
        {
            if(m>=40 && m<50)
               printf("\nTHIRD");
            else
               printf("\nFAILED");
        }
    }
}
