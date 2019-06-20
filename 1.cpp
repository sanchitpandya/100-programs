#include<stdio.h>
int main()
{
    char str[1000], rstr[1000];
    int i,count=0,end;
    printf("Enter a string\n");
    gets(str);
    while(str[count]!='\0')
    count++;
    end=count-1;
    for(i=0;i<count;i++)
    {
        rstr[i] = str[end];
        end--;
    }
    rstr[i]='\0';
    printf("\n Reverse of the string is %s",rstr);
}
