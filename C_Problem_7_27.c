#include<stdio.h>
void disp_count_sum14(int,int);
int main()
{
    disp_count_sum14(0,100000);
    return 0;
}
void disp_count_sum14(int x,int n)
{
    int sum,temp,count=0,digit;
    while(x<n)
    {
        temp=x;
        sum=0;
        while(temp!=0)
        {
            digit=temp%10;
            sum+=digit;
            temp=temp/10;
        }
        if(sum==14)
            count++;
        x++;
    }
    printf("Output : %d",count);
}
