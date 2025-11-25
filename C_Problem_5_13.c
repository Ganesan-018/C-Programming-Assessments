#include <stdio.h>
int main()
{
    int x,digit,rev=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(;x!=0;)
    {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    printf("Reverse of a number : %d",rev);
    return 0;
}
