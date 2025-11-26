#include<stdio.h>
void disp_2digit_odd_sum7(int,int);
int main()
{
    disp_2digit_odd_sum7(10,99);
    return 0;
}
void disp_2digit_odd_sum7(int i,int n)
{
    int temp,digit,sum;
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum=0;
            temp=i;
            while(temp!=0)
            {
                digit=temp%10;
                sum+=digit;
                temp=temp/10;
            }
            if(sum==7)
                printf("%d,",i);
        }
        i++;
    }
}
