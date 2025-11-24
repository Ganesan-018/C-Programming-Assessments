#include <stdio.h>
int main() 
{
    int num,digit,sum=0;
    printf("Enter a four digit number : ");
    scanf("%d",&num);
    int last=num%100;
    num=num/100;
    for(int i=0;i<2;i++)
    {
        digit=num%10;
        sum=sum*10+digit;
        num=num/10;
    }
    printf("Reverse of the number : %d",sum*100+last);
    return 0;
}
