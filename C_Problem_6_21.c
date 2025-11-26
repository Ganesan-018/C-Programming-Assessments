#include <stdio.h>
int main()
{
    int x,count=0,digit;
    printf("Enter a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        digit=x%10;
        if(digit%2!=0)
            count++;
        x=x/10;
    }
    printf("Output : %d",count);
    return 0;
}
