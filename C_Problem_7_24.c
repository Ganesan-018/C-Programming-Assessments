#include<stdio.h>
#include<math.h>
void disp_two_digit_square(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_two_digit_square(x);
    return 0;
}
void disp_two_digit_square(int x)
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
    printf("Output : %d",count);
}
