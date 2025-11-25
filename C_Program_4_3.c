#include<stdio.h>
int main()
{
    int n=1,sum=0;
    loop:
    {
        sum+=n;
        n++;
        if(n<6)
            goto loop;
    }
    printf("Sum : %d",sum);
    return 0;
}
