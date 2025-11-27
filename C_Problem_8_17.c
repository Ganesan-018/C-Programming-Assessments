#include<stdio.h>
#include<math.h>
int disp_count_sum14(int,int);
int main()
{
    int x;
    x=disp_count_sum14(0,100000);;
    printf("Count : %d",x);
    return 0;
}
int disp_count_sum14(int x,int n)
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
    return count;
}
