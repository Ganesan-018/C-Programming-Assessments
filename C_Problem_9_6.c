#include<stdio.h>
int main()
{
    int arr[5],sum=0,i,temp;
    printf("Enter any 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    printf("Numbers in ascending order : \n");
    for(i=0;i<5;i++)
        printf("%d\n",arr[i]);
    return 0;
}
