#include<stdio.h>
int main()
{
    int x1,x2,x3,lcm=0,max;
    printf("Enter any three numbers : ");
    scanf("%d %d %d",&x1,&x2,&x3);
    if(x1>x2 && x1>x3)
        max=x1;
    else if(x2>x1 && x2>x3)
        max=x2;
    else
        max=x3;
    for(int i=max;lcm==0;i++)
        if(i%x1==0 && i%x2==0 && i%x3==0)
            lcm=i;
    printf("LCM : %d",lcm);
}
