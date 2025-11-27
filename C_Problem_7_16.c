#include<stdio.h>
void check_prime(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    check_prime(x);
    return 0;
}
void check_prime(int x)
{
    int count=0,i=1;
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
