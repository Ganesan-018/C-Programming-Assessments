#include<stdio.h>
int main()
{
    int num;
    int *ptr;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Original Value : %d",num);
    ptr=&num;
    *ptr=*ptr+25;
    printf("\nChanged value : %d",num);
    return 0;
}
