#include<stdio.h>
int main()
{
    int x,count=0,digit,sum=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        digit=x%10;
        sum+=digit;
        x=x/10;
    }
    printf("Sum of the digits : %d",sum);
    return 0;
}
