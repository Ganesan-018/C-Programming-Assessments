#include<stdio.h>
void count_total_digits(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    count_total_digits(x);
    return 0;
}
void count_total_digits(int x)
{
    int count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("Count of the digits : %d",count);
}
