#include<stdio.h>
void disp_odd(int);
int main()
{
    disp_odd(9);
    return 0;
}
void disp_odd(int n)
{
    for(int i=1;i<=n;i++)
        if(i%2!=0)
            printf("%d\n",i);
}
