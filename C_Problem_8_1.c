#include<stdio.h>
int disp_sum(int,int);
int main()
{
    int sum;
    sum=disp_sum(1,6);
    printf("Sum : %d",sum);
    return 0;
}
int disp_sum(int x,int n)
{
    int sum=0;
    while(x<n)
    {
        sum+=x;
        x++;
    }    
    return sum;
}
