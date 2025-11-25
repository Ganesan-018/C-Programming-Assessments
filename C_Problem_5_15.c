#include <stdio.h>
int main()
{
    int x,first,last,middle,power=1,digit,temp;
    printf("Enter a number : ");
    scanf("%d",&x);
    temp=x;
    for(;temp>=10;)
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
    printf("%d",x);
    return 0;
}
