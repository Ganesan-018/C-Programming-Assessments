#include <stdio.h>
int main()
{
    int x=1,count,count_prime=0;
    while(x<10)
    {
        count=0;
        for(int i=1;i<=x;i++)
            if(x%i==0)
                count++;
        if(count==2)
            count_prime++;
        x++;
    }
    printf("Output : %d",count_prime);
    return 0;
}
