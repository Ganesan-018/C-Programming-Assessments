#include<stdio.h>
int main()
{
    int x,count=0,digit,rev=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    printf("Reverse of the number : %d",rev);
    return 0;
}
