#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    loop:
    {
        num=num/10;
        count++;
        if(num!=0)
            goto loop;
    }
    printf("Count of the digits : %d",count);
    return 0;
}
