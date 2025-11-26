#include<stdio.h>
void disp_rsum(int);
int main()
{
    disp_rsum(6);
    return 0;
}
void disp_rsum(int n)
{
    int sum=0;
    for(int i=n;i>0;i--)
        sum+=i;
    printf("Sum : %d",sum);
}
