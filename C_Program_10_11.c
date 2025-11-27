#include<stdio.h>
#include<string.h>
int main()
{
    char str[51];
    int arr[51];
    printf("Enter a number string upto 50 digits : ");
    scanf("%[^\n]",&str);
    for(int i=0;str[i]!='\0';i++)
        arr[i]=str[i]-'0';
    printf("Integer Array : ");
    for(int i=0;i<50;i++)
        printf("%d",arr[i]);
    return 0;
}
