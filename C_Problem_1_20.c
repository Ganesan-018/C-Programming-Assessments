#include<stdio.h>
int main()
{
    int num;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    int last=num%10;
    printf("Number after making ten's digit 0 : %d",(num-(num%100))+last);
    return 0;
}
