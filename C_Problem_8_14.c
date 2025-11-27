#include<stdio.h>
#include<math.h>
int disp_two_digit_square(int);
int main()
{
    int x,count;
    printf("Enter a number : ");
    scanf("%d",&x);
    count=disp_two_digit_square(x);
    printf("Count : %d",count);
    return 0;
}
int disp_two_digit_square(int x)
{
    int sq_root,count=0,digit;
    while(x>=10)
    {
        digit=x%100;
        sq_root=sqrt(digit);
        if(sq_root * sq_root == digit)
            count++;
        x=x/10;
    }
    return count;
}
