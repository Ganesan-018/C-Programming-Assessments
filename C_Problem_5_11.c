#include <stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(;x!=0;count++)
        x=x/10;
    printf("Count of the digits : %d",count);
    return 0;
}
