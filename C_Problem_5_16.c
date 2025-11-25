#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
        if(x%i==0)
            count++;
    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
