#include <stdio.h>
int main() 
{
    int num,tens;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    tens=num/10;
    tens=tens%10;
    printf("%d",tens);
    num = tens%2!=0 ? num-5 : num;
    printf("After changing the number : %d", num);
    return 0;
}
