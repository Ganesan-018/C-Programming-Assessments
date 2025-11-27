#include<stdio.h>
int main()
{
    int arr[5],i,digit,rev,num,sum=0,revarr[5],count;
    printf("Enter any 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    {
        num=arr[i];
        rev=0;
        while(num!=0)
        {
            digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        revarr[i]=rev;
        sum+=rev;
    }
    printf("Reverse Array: \n");
    for(i=0;i<5;i++)
        printf("%d\n",revarr[i]);
    printf("\nSum of reversed numbers: %d\n", sum);
    return 0;
}
