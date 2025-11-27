#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_total_2digit_odd(x);
    return 0;
}
void disp_total_2digit_odd(int x)
{
    int count=0,digit;
    while(x>=10)
    {
        digit=x%100;
        if(digit%2!=0)
            count++;
        x=x/10;
    }
    printf("Output : %d",count);
}
