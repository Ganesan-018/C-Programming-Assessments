#include<stdio.h>
int disp_total_odd_digits(int);
int main()
{
    int x,count;
    printf("Enter a number : ");
    scanf("%d",&x);
    count=disp_total_odd_digits(x);
    printf("Count : %d",count);
    return 0;
}
int disp_total_odd_digits(int x)
{
    int count=0,digit;
    while(x!=0)
    {
        digit=x%10;
        if(digit%2!=0)
            count++;
        x=x/10;
    }
    return count;
}
