#include<stdio.h>
int main()
{
    int x,count=0,sum=0,digit;
    printf("Enter a four digit number : ");
    scanf("%d",&x);
    x=(x/10)%100;
    for(int i=1;i<=x;i++)
        if(x%i==0)
            count++;
    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
