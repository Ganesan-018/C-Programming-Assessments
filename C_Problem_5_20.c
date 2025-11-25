#include <stdio.h>
int main()
{
    int x,count,count_prime=0;
    for(x=1;x<10;x++)
    {
        count=0;
        for(int i=1;i<=x;i++)
            if(x%i==0)
                count++;
        if(count==2)
            count_prime++;
    }
    printf("Output : %d",count_prime);
    return 0;
}
