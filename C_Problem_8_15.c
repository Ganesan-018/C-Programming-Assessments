#include<stdio.h>
#include<math.h>
int disp_single_digit_prime(int);
int main()
{
    int x,count;
    printf("Enter a number : ");
    scanf("%d",&x);
    count=disp_single_digit_prime(x);
    printf("Count : %d",count);
    return 0;
}
int disp_single_digit_prime(int x)
{
    int count_prime=0,count=0,digit;
    while(x!=0)
    {
        count=0;
        digit=x%10;
        for(int i=1;i<=digit;i++)
            if(x%i==0)
                count++;
        x=x/10;
        if(count==2)
            count_prime++;
    }
    return count_prime;
}
