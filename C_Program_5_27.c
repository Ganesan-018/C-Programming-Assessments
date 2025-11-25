#include <stdio.h>
int main()
{
    int x,digit,count=0,sum,temp;
    for(x=0;x<100000;x++)
    {
        temp=x;
        sum=0;
        for(;temp!=0;)
        {
            digit=temp%10;
            sum+=digit;
            temp=temp/10;
        }
        if(sum==14)
            count++;
    }
    printf("Output : %d",count);
    return 0;
}
