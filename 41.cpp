#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    int flag=0;
    if(strlen(s1)==strlen(s2))
    {
        for(int i=0;i<strlen(s1);i++)
        {
           if(s1[i]!=s2[i])
           {
              flag=1;
              break;
           }
        }
        if(flag==0)
          printf("Both the strings are identical.");
        else
          printf("Both the strings are not identical.");           
    }
    else
        printf("Both strings can't be identical since lengths of both the strings are different");
}
