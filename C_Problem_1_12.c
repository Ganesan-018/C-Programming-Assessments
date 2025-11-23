#include <stdio.h>
int main() 
{
    int num,digit,sum=0;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("Sum of the digits : %d",sum);
    return 0;
}
