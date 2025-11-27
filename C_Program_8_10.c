#include<stdio.h>
int disp_2digit_even_sum6(int,int);
int main()
{
    int count;
    count=disp_2digit_even_sum6(1,10);
    printf("Count : %d",count);
    return 0;
}
int disp_2digit_even_sum6(int x,int n)
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
    return count_prime;
}
