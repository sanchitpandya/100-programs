#include<stdio.h>
int main()
{
    char str[1000];
    int i,count=0,end,mid;
    printf("Enter a string\n");
    gets(str);
    while(str[count]!='\0')
    count++;
    end=count-1;
    mid=count/2;
    for(i=0;i<mid;i++)
    {
        if(str[i]!=str[end])
        {
            printf("\nNot a Palindrome");
            break;
        }
        end--;
    }
    if(i==mid)
    printf("\nPalindrome");
}
