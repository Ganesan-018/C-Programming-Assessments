#include<stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_interchange_first_last_digit(x);
    return 0;
}
void disp_interchange_first_last_digit(int x)
{
    int first,last,middle,digit,temp,power=1;
    temp=x;
    while(temp>=10)
    {
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    last=x%10;
    middle=x%power;
    middle=middle/10;
    x=last*power+middle*10+first;
    printf("Output : %d",x);
}
