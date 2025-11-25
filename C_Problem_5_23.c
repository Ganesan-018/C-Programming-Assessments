#include <stdio.h>
#include <math.h>
int main()
{
    int x,count=0,digit,sq_root;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(;x!=0;)
    {
        digit=x%10;
        sq_root=sqrt(digit);
        if(sq_root * sq_root == digit)
            count++;
        x=x/10;
    }
    printf("Output : %d",count);
    return 0;
}
