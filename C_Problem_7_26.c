#include<stdio.h>
void disp_biggest_4digit_div7_9(int,int);
int main()
{
    disp_biggest_4digit_div7_9(1000,9999);
    return 0;
}
void disp_biggest_4digit_div7_9(int x,int n)
{
    int num;
    while(x<=n)
    {
        if(x%7==0 && x%9==0)
            num=x;
        x++;
    }
    printf("Output : %d",num);
}
