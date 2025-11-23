#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a two digit number : ");
    scanf("%d",&num);
    printf("Number after making one's digit 0 : %d", num-(num%10));
    return 0;
}
