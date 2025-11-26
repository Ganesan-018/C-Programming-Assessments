#include<stdio.h>
void disp_assend(int);
int main()
{
    disp_assend(6);
    return 0;
}
void disp_assend(int n)
{
    for(int i=1;i<n;i++)
        printf("%d\n",i);
}
