#include<stdio.h>
int main()
{
    int num,count=0,i=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    loop:
    {
        if(i<=num)
        {
            if(num%i==0)
                count++;
            i++;
            goto loop;
        }
        if(count==2)
            printf("Prime");
        else
            printf("Not Prime");
    }
    return 0;
}
