#include<stdio.h>
int main()
{
    int num,temp,first,last,middle,power=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    loop:
    {
        if(temp>=10)
        {
            temp=temp/10;
            power=power*10;
            goto loop;
        }
        first=temp;
        last=num%10;
        middle=num%power;
        middle=middle/10;
        num=last*power+middle*10+first;
    }
    printf("Output : %d",num);
    return 0;
}
