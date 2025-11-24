#include<stdio.h>
int main()
{
    int num;
    printf("Enter a four digit number : ");
    scanf("%d",&num);
    if(num/100 == num%100)
        printf("Success");
    else
        printf("Failure");
}
