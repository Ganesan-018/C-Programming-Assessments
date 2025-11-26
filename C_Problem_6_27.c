#include <stdio.h>
int main()
{
    int x=0,digit,count=0,sum,temp;
    while(x<100000)
    {
        temp=x;
        sum=0;
        while(temp!=0)
        {
            digit=temp%10;
            sum+=digit;
            temp=temp/10;
        }
        if(sum==14)
            count++;
        x++;
    }
    printf("Output : %d",count);
    return 0;
}
