#include<stdio.h>
int main()
{
    int n=5;
    loop:
    {
        printf("%d\n",n);
        n--;
        if(n>=1)
            goto loop;
    }
    return 0;
}
