#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    num= num%2!=0 ? num-5 : num;
    printf("After changing the number : %d", num);
    return 0;
}
