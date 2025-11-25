#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    loop:
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
        if(num!=0)
            goto loop;
    }
    printf("Reverse of the number : %d",rev);
    return 0;
}
