#include<stdio.h>
int main()
{
    int num,hun;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    hun=num/10;
    hun=hun/10;
    num = ((num%10)%2)!=0 && hun%2!=0 ? num-5 : num;
    printf("After changing the number : %d",num);
    return 0;
}
