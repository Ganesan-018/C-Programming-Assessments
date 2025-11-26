#include<stdio.h>
int main()
{
    int x1,x2,gcd=1,i=1;
    printf("Enter any two numbers : ");
    scanf("%d %d",&x1,&x2);
    while(i<=x1 && i<=x2)
    {
        if(x1%i==0 && x2%i==0)
            gcd=i;
        i++;
    }
    printf("GCD : %d",gcd);
    return 0;
}
