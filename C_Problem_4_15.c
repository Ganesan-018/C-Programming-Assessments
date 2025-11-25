#include<stdio.h>
int main()
{
    int num,temp,first,last,middle,power=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    loop:
    {
        if(temp>=10)
        {
            temp=temp/10;
            power=power*10;
            goto loop;
        }
        first=temp;
        if(first%2!=0)
        {
            last=num%10;
            middle=num%power;
            middle=middle/10;
            num=(first-1)*power+middle*10+last; 
        }
        
    }
    printf("Output : %d",num);
    return 0;
}
