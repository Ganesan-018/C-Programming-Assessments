#include<stdio.h>
int main()
{
    int n=6,sum=0;
    loop:
    {
        sum+=n;
        n--;
        if(n>0)
            goto loop;
    }
    printf("Sum : %d",sum);
    return 0;
}
