#include<stdio.h>
int main()
{
    char str[51];
    int arr[50],i;
    printf("Enter a number upto 50 digits : ");
    for(i=0;i<50;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<50;i++)
        str[i]=arr[i]+'0';
    str[i]='\0';
    printf("Character Array : %s",str);
    return 0;
}
