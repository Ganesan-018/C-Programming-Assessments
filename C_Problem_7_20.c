#include<stdio.h>
void disp_2digit_even_sum6(int,int);
int main()
{
    disp_2digit_even_sum6(1,10);
    return 0;
}
void disp_2digit_even_sum6(int x,int n)
{
    int count,count_prime=0;
    while(x<n)
    {
        count=0;
        for(int i=1;i<=x;i++)
            if(x%i==0)
                count++;
        if(count==2)
            count_prime++;
        x++;
    }
    printf("Output : %d",count_prime);
}
