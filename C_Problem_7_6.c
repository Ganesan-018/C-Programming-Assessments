#include<stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
    disp_2digit_odd_below20(20);
    return 0;
}
void disp_2digit_odd_below20(int n)
{
    for(int i=10;i<=n;i++)
        if(i%2!=0)
            printf("%d\n",i);
}
