#include <stdio.h>
int main()
{
    int x=1000,num;
    while(x<=9999)
    {
        if(x%7==0 && x%9==0)
            num=x;
        x++;
    }
    printf("Output : %d",num);
    return 0;
}
