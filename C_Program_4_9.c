#include<stdio.h>
int main()
{
    int n=10,temp,sum,digit;
    loop:
    {
        if(n>=10 && n<100)
        {
            temp=n;
            if(n%2==0)
            {
                sum=0;
                inner_loop:
                {
                    digit=temp%10;
                    sum+=digit;
                    temp=temp/10;  
                }
                if(temp!=0)
                    goto inner_loop;
                if(sum==6)
                    printf("%d\n",n);
            }
            n++;
            goto loop;
        }
    }
    return 0;
}
