#include<stdio.h>
void disp_count_HCF2(int,int);
int main()
{
    int x,y;
    printf("Enter any two numbers : ");
    scanf("%d %d",&x,&y);
    disp_count_HCF2(x,y);
    return 0;
}
void disp_count_HCF2(int x1,int x2)
{
    int gcd=1,i=1;
    while(i<=x1 && i<=x2)
    {
        if(x1%i==0 && x2%i==0)
            gcd=i;
        i++;
    }
    printf("GCD : %d",gcd);
}
