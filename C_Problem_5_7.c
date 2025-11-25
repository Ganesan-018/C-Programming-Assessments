#include <stdio.h>
int main()
{
    int x,temp,sum,digit;
    for(x=10;x<=100;x++)
        if(x%2!=0)
        {
            temp=x;
            sum=0;
            loop:
            {
                digit=temp%10;
                sum+=digit;
                temp=temp/10;
                if(temp!=0)
                    goto loop;
                if(sum==7)
                    printf("%d\n",x);
            }
        }
            
    return 0;
}
