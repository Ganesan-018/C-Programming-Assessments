#include<stdio.h>
int main()
{
    char str[50],num=0;
    printf("Enter a number as string : ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
        num=num*10+str[i]-'0';
    printf("Integer value is %d",num);
    return 0;
}
