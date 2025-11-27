#include<stdio.h>
int main()
{
    int num,temp,digit,i=0;
    char str[50],ch;
    printf("Enter a integer : ");
    scanf("%d",&num);
    temp=num;
    if(num==0)
        str[i]='0';
    while(temp!=0)
    {
        digit=temp%10;
        str[i]=digit+'0';
        temp=temp/10;
        i++;
    }
    str[i]='\0';
    for(int j=0,k=i-1;j<k;j++,k--)
    {
        ch=str[j];
        str[j]=str[k];
        str[k]=ch;
    }
    printf("String value : %s",str);
    return 0;
}
