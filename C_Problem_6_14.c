#include <stdio.h>
int main()
{
    int x,first,last,middle,power=1,digit,temp;
    printf("Enter a number : ");
    scanf("%d",&x);
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
    return 0;
}
