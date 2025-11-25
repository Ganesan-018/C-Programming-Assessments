#include <stdio.h>
#include <math.h>
int main()
{
    int x,count=0,digit,count_prime=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(;x!=0;)
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
    printf("Output : %d",count_prime);
    return 0;
}
