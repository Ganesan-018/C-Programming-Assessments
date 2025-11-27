#include<stdio.h>
void disp_LCM3(int,int,int);
int main()
{
    int x,y,z;
    printf("Enter any three numbers : ");
    scanf("%d %d %d",&x,&y,&z);
    disp_LCM3(x,y,z);
    return 0;
}
void disp_LCM3(int x1,int x2,int x3)
{
    int max,lcm=0;
    if(x1>x2 && x1>x3)
        max=x1;
    else if(x2>x1 && x2>x3)
        max=x2;
    else
        max=x3;
    int i=max;
    while(lcm==0)
    {
        if(i%x1==0 && i%x2==0 && i%x3==0)
            lcm=i;
        i++;
    }
    printf("LCM : %d",lcm);
}
