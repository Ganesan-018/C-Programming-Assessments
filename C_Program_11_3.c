#include<stdio.h>
void arrange_ascend(int*);
int main()
{
    int num=1;
    arrange_ascend(&num);
    return 0;
}
void arrange_ascend(int *ptr)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        (*ptr)++;
    }
        
}
