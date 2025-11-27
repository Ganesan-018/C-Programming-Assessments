#include<stdio.h>
void check_last_digit_odd(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    check_last_digit_odd(x);
    return 0;
}
void check_last_digit_odd(int x)
{
    int first,last,middle,digit,temp,power=1;
    temp=x;
    while(temp>=10)
    {
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    if(first%2!=0)
    {
        last=x%10;
        middle=x%power;
        middle=middle/10;
        x=(first-1)*power+middle*10+last;
    }
    printf("Output : %d",x);
}
