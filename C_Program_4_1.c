#include<stdio.h>
int main()
{
    int n=0;
    loop:
    {
        n++;
        printf("%d\n",n);
        if(n==5)
            return 0;
        goto loop;
    }
}
