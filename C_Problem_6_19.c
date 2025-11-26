#include<stdio.h>
int main()
{
    int x,count=0,sum=0,digit,i=1;
    printf("Enter a four digit number : ");
    scanf("%d",&x);
    x=(x/10)%100;
    while(i<=x)
    {
        if(x%i==0)
            count++;
        i++;
    }
    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
