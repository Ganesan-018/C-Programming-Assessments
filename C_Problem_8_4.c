#include<stdio.h>
int disp_2digit_odd_sum_tens7(int,int);
int main()
{
    int sum;
    sum=disp_2digit_odd_sum_tens7(10,100);
    printf("Sum : %d",sum);
    return 0;
}
int disp_2digit_odd_sum_tens7(int x,int n)
{
    int sum=0;
    while(x<n)
    {
        if(x%2!=0 && x/10==7)
            sum+=x;
        x++;
    }    
    return sum;
}
