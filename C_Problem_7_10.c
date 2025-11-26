#include<stdio.h>
void disp_2digit_odd_sum_tens7(int,int);
int main()
{
    disp_2digit_odd_sum_tens7(10,99);
    return 0;
}
void disp_2digit_odd_sum_tens7(int x,int n)
{
    int sum=0;
    while(x<=n)
    {
        if(x%2!=0)
            if(x/10==7)
                sum+=x;
        x++;
    }
    printf("Sum : %d",sum);
}
