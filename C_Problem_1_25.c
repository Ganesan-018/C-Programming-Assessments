#include<stdio.h>
int main()
{
    int num,sum,digit;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    while(1)
    {
        sum=0;
        while(num>0)
        {
            digit=num%10;
            sum+=digit;
            num=num/10;
        }
        if(sum<10)
            break;
        else
            num=sum;
    }
    
    printf("Sum of the digits : %d",sum);
    return 0;
}
