#include<stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    int x,count;
    printf("Enter a number : ");
    scanf("%d",&x);
    count=disp_total_2digit_odd(x);
    printf("Count : %d",count);
    return 0;
}
int disp_total_2digit_odd(int x)
{
    int count=0,digit;
    while(x>=10)
    {
        digit=x%100;
        if(digit%2!=0)
            count++;
        x=x/10;
    }
    return count;
}
