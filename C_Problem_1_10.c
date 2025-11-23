#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    num=num%100;
    printf("Ten's digit of a number : %d", num/10);
    return 0;
}
