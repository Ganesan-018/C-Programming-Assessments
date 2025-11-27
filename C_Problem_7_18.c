#include<stdio.h>
void check_first_2digits_prime(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    check_first_2digits_prime(x);
    return 0;
}
void check_first_2digits_prime(int x)
{
    int i=1,count=0,sum=0,digit;
    x=x%100;
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
}
