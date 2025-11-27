#include<stdio.h>
int disp_rsum(int,int);
int main()
{
    int sum;
    sum=disp_rsum(6,0);
    printf("Sum : %d",sum);
    return 0;
}
int disp_rsum(int x,int n)
{
    int sum=0;
    while(x>n)
    {
        sum+=x;
        x--;
    }    
    return sum;
}
