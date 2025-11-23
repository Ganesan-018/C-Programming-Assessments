#include <stdio.h>
int main() 
{
    int num,digit,sum=0;
    printf("Enter a two digit number : ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        sum=sum*10+digit;
        num=num/10;
    }
    printf("Reverse of the number : %d",sum);
    return 0;
}
