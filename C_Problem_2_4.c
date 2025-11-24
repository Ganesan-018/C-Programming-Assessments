#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    num = num>50 ? 1 : 0;
    printf("Output : %d",num);
    return 0;
}
