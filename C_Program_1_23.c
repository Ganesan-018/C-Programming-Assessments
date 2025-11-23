#include <stdio.h>
int main() 
{
    int num,sum=0,digit;
    printf("Enter a two digit number : ");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    num = sum%2!=0 ? temp-5 : temp;
    printf("After changing the number : %d", num);
    return 0;
}
