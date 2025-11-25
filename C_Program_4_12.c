#include<stdio.h>
int main()
{
    int num,digit,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    loop:
    {
        digit=num%10;
        sum+=digit;
        num=num/10;
        if(num!=0)
            goto loop;
    }
    printf("Sum of the digits : %d",sum);
    return 0;
}
