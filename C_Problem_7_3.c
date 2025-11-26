#include<stdio.h>
void disp_sum(int);
int main()
{
    disp_sum(6);
    return 0;
}
void disp_sum(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
        sum+=i;
    printf("Sum : %d",sum);
}
