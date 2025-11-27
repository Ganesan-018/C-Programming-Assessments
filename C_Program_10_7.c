#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string : ");
    scanf("%[^\n]s",&str);
    int length=strlen(str);
    printf("Length of the string : %d",length);
    return 0;
}
