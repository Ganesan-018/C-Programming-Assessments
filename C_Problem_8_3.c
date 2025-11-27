#include<stdio.h>
int disp_2digit_ones5(int,int);
int main()
{
    int sum;
    sum=disp_2digit_ones5(10,100);
    printf("Sum : %d",sum);
    return 0;
}
int disp_2digit_ones5(int x,int n)
{
    int sum=0;
    while(x<n)
    {
        if(x%10==5)
            sum+=x;
        x++;
    }    
    return sum;
}
