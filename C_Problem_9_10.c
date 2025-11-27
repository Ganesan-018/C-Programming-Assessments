#include<stdio.h>
int main()
{
    int arr[5],i,j=0,newarr[5],count;
    printf("Enter any 5 numbers : ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    {
        count=0;
        for(int k=1;k<=arr[i];k++)
            if(arr[i]%k==0)
                count++;
        if(count!=2)
        {
            newarr[j]=arr[i];
            j++;
        }
    }
    while(j < 5)
    {
        newarr[j] = 0;
        j++;
    }
    printf("New Array: \n");
    for(i=0;i<5;i++)
        printf("%d\n",newarr[i]);
    return 0;
}
