#include<stdio.h>
int main()
{
    int num;
    printf("Enter a two digit number : ");
    scanf("%d",&num);
    num = (num/10)!=(num%10) ? 1 : 0;
    printf("Output : %d",num);
    return 0;
}
