#include<stdio.h>
int main()
{
    int n=11;
    loop:
    {
        if(n>=10 && n<20)
        {
            if(n%2!=0)
                printf("%d\n",n);
            n++;
            goto loop;
        }
    }
    return 0;
}
