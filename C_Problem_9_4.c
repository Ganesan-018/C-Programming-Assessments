#include<stdio.h>
int main()
{
    int arr[5],sum=0,i;
    printf("Enter any 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    int max=arr[0];
    for(i=0;i<5;i++)
        if(max<arr[i])
            max=arr[i];
    printf("Biggest Number : %d",max);
    return 0;
}
