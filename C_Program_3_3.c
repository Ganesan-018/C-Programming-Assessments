#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<50)
        printf("Success");
    else
        printf("Failure");
}
