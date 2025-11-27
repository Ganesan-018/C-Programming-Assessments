#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x,num;
    printf("Enter a number : ");
    scanf("%d",&x);
    num=disp_interchange_first_last_digit(x);
    printf("Output : %d",num);
    return 0;
}
int disp_interchange_first_last_digit(int x)
{
    int first,last,middle,temp,pow=1,digit,num;
    temp=x;
    while(temp>=10)
    {
        digit=temp%10;
        pow=pow*10;
        temp=temp/10;
    } 
    first=temp;
    last=x%10;
    middle=x%pow;
    middle=middle/10;
    num=last*pow+middle*10+first;
    return num;
}
