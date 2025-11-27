#include<stdio.h>
#include<string.h>
int main()
{
    char str[51];
    int i=0;
    printf("Enter a number upto 50 digits : ");
    scanf("%[^\n]s",&str);
    while(str[i]=='0' && str[i]!='\0')
        i++;
    if(str[i]=='\0')
        printf("Output : 0");
    else
        printf("Output : %s",&str[i]);
    return 0;
}
