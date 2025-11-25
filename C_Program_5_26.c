#include <stdio.h>
int main()
{
    int x,num;
    for(x=1000;x<=9999;x++)
    {
        if(x%7==0 && x%9==0)
            num=x;
    }
    printf("Output : %d",num);
    return 0;
}
