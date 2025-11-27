#include<stdio.h>
int check_last_digit_odd(int);
int main()
{
    int x,num;
    printf("Enter a number : ");
    scanf("%d",&x);
    num=check_last_digit_odd(x);
    printf("Output : %d",num);
    return 0;
}
int check_last_digit_odd(int x)
{
    int first,last,middle,temp,power=1,digit;
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

    return x;
}
