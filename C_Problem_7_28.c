#include<stdio.h>
void disp_LCM2(int,int);
int main()
{
    int x,y;
    printf("Enter any two numbers : ");
    scanf("%d %d",&x,&y);
    disp_LCM2(x,y);
    return 0;
}
void disp_LCM2(int x1,int x2)
{
    int max,lcm=0;
    max = (x1>x2) ? x1 : x2;
    int i=max;
    while(lcm==0)
    {
        if(i%x1==0 && i%x2==0)
            lcm=i;
        i++;
    }
    printf("LCM : %d",lcm);
}
