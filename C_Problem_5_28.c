#include <stdio.h>
int main()
{
    int x1,x2,max,lcm=0;
    printf("Enter any two numbers : ");
    scanf("%d %d",&x1,&x2);
    max = (x1>x2) ? x1 : x2;
    for(int i=max;lcm==0;i++)
    {
        if(i%x1==0 && i%x2==0)
            lcm=i;
    }
    printf("LCM : %d",lcm);
    return 0;
}
