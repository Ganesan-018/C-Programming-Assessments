#include<stdio.h>
#include<string.h>
int main()
{
    char str[51],rev[51];
    int len,j=0;
    printf("Enter a number upto 50 digits : ");
    scanf("%[^\n]",&str);
    len=strlen(str);
    for(int i=len-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("Reversed Number : %s",rev);
    return 0;
}
