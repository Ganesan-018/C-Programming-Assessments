#include<stdio.h>
void disp_2digit_even_sum6(int,int);
int main()
{
    disp_2digit_even_sum6(10,99);
    return 0;
}
void disp_2digit_even_sum6(int i,int n)
{
    int temp,digit,sum;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=0;
            temp=i;
            while(temp!=0)
            {
                digit=temp%10;
                sum+=digit;
                temp=temp/10;
            }
            if(sum==6)
                printf("%d,",i);
        }
        i++;
    }
}
