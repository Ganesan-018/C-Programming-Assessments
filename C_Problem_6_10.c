#include<stdio.h>
int main()
{
    int x=11,digit,sum=0,temp;
    while(x<100)
    {
        if(x%2!=0)
            if(x/10==7)
                sum+=x;
        x++;
    }
    printf("Sum : %d",sum);
    return 0;
}
