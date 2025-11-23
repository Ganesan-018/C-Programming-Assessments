#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    printf("Number after making ten's digit 1 : %d", (num-(num%10))+2);
    return 0;
}
