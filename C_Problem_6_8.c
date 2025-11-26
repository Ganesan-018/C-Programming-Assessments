#include<stdio.h>
int main()
{
    int x=11,digit,sum,temp;
    while(x<100)
    {
        if(x%2==0)
        {
            sum=0;
            temp=x;
            while(temp!=0)
            {
                digit=temp%10;
                sum+=digit;
                temp=temp/10;
            }
            if(sum==6)
                printf("%d\n",x);
        }
        x++;
    }
    return 0;
}
