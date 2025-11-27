#include<stdio.h>
#include<math.h>
void disp_single_digit_square(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_single_digit_square(x);
    return 0;
}
void disp_single_digit_square(int x)
{
    int sq_root,count=0,digit;
    while(x!=0)
    {
        digit=x%10;
        sq_root=sqrt(digit);
        if(sq_root * sq_root == digit)
            count++;
        x=x/10;
    }
    printf("Output : %d",count);
}
