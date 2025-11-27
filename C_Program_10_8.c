#include<stdio.h>
#include<string.h>
int main()
{
    char str[51];
    int valid=1;
    printf("Enter a number upto 50 digits : ");
    scanf("%[^\n]s",&str);
    for(int i=0;str[i]!='\0';i++)
        if(str[i]<'0' || str[i]>'9')
        {
            valid=0;
            break;
        }
    if(valid==1)
        printf("Valid Number");
    else
        printf("Invalid Number");
    return 0;
}
