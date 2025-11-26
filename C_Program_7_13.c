#include<stdio.h>
void disp_reverse_number(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_reverse_number(x);
    return 0;
}
void disp_reverse_number(int x)
{
    int rev=0,digit;
    while(x!=0)
    {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    printf("Reverse of the number : %d",rev);
}
