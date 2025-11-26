#include<stdio.h>
int main()
{
    int x1,x2,gcd=1,i;
    printf("Enter any two numbers : ");
    scanf("%d %d",&x1,&x2);
    for(int i=1;i<=x1 && i<=x2;i++)
    {
        if(x1%i==0 && x2%i==0)
            gcd=i;
    }
    printf("GCD : %d",gcd);
    return 0;
}
