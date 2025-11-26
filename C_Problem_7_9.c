#include<stdio.h>
void disp_2digit_even_sum6(int,int);
int main()
{
    disp_2digit_even_sum6(10,99);
    return 0;
}
void disp_2digit_even_sum6(int i,int n)
{
    int sum=0;
    while(i<n)
    {
        if(i%10==5)
            sum+=i;
        i++;
    }
    printf("Sum : %d\n",sum);
}
