#include <stdio.h>
int main()
{
    int x,sum=0;
    for(x=10;x<100;x++)
    {
        if(x%2!=0)
            if(x/10==7)
                sum+=x;
    }
    printf("Sum : %d",sum);
    return 0;
}
