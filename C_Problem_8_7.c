#include<stdio.h>
int disp_reverse_number(int);
int main()
{
    int x,rev;
    printf("Enter a number : ");
    scanf("%d",&x);
    rev=disp_reverse_number(x);
    printf("Reverse of a number : %d",rev);
    return 0;
}
int disp_reverse_number(int x)
{
    int rev=0,digit;
    while(x!=0)
    {
        digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }    
    return rev;
}
