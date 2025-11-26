#include<stdio.h>
int main()
{
    int x,count=0,i=1;
    printf("Enter a number : ");
    scanf("%d",&x);
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
