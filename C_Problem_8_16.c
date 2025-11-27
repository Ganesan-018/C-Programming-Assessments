#include<stdio.h>
#include<math.h>
int disp_biggest_4digit_div7_9(int,int);
int main()
{
    int x;
    x=disp_biggest_4digit_div7_9(1000,9999);
    printf("Output : %d",x);
    return 0;
}
int disp_biggest_4digit_div7_9(int x,int n)
{
    int num;
    while(x<=n)
    {
        if(x%7==0 && x%9==0)
            num=x;
        x++;
    }
    return num;
}
