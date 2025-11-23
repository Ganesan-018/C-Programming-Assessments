#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a two digit number : ");
    scanf("%d",&num);
    printf("Number after making ten's digit 1 : %d", 10+(num%10));
    return 0;
}
