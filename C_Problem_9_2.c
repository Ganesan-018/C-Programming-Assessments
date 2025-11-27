#include<stdio.h>
int main()
{
    int arr[5],sum=0,i;
    printf("Enter any 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
        sum+=arr[i];
    printf("Average : %d",sum/5);
    return 0;
}
