#include<stdio.h>
int main()
{
    int x,count=0,sum=0,digit;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
        if(x%i==0)
            count++;
    for(;x!=0;)
    {
        digit=x%10;
        sum+=digit;
        x=x/10;
    }
    if(count==2)
        if(sum==14)
            printf("Prime & sum of digits is 14");
        else
            printf("Prime & sum of digits is not 14");
    else
        if(sum==14)
            printf("Not Prime but sum of digits is 14");
        else
            printf("Not Prime & sum of digits is not 14");
    return 0;
}
