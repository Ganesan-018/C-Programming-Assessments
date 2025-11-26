#include<stdio.h>
void disp_assend(int);
int main()
{
    disp_assend(5);
    return 0;
}
void disp_assend(int n)
{
    for(int i=n;i>0;i--)
        printf("%d\n",i);
}
