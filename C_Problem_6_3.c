#include<stdio.h>
int main()
{
    int x=1,sum=0;
    while(x<6)
    {
        sum+=x;
        x++;
    }
    printf("Sum : %d",sum);
    return 0;
}
