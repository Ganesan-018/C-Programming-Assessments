#include<stdio.h>
int main()
{
    int num;
    printf("Enter a four digit number : ");
    scanf("%d",&num);
    num = (num%100)==(num/100) ? 1 : 0;
    printf("Output : %d",num);
    return 0;
}
