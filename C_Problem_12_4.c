#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    int i,count=0;
    for(i=0;*(str+i)!='\0';i++)
    {
        if(*(str+i)==' ')
            count++;
    }
    if(i>0)
        count++;
    printf("Total Words : %d",count);
    return 0;
}
