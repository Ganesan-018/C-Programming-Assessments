#include<stdio.h>
int main()
{
    int arr[5],sum=0,i;
    printf("Enter any 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    int min=arr[0];
    for(i=0;i<5;i++)
        if(min>arr[i])
            min=arr[i];
    printf("Smallest Number : %d",min);
    return 0;
}
