#include<stdio.h>
int main()
{
    int n=10,sum=0;
    loop:
    {
        if(n>=10 && n<100)
        {
            if(n%2!=0)
            {
                if(n/10 == 7)
                    sum+=n;
            }
            n++;
            goto loop;
        }
    }
    printf("%d",sum);
    return 0;
}
