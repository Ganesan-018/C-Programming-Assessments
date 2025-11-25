#include <stdio.h>
int main()
{
    int x,digit,sum=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(;x!=0;)
    {
        digit=x%10;
        sum+=digit;
        x=x/10;
    }
    printf("Sum : %d",sum);
    return 0;
}
