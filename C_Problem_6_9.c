#include<stdio.h>
int main()
{
    int x=11,sum=0;
    while(x<100)
    {
        if(x%10==5)
            sum+=x;
        x++;
    }
    printf("Sum : %d\n",sum);
    return 0;
}
