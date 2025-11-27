#include <stdio.h>
int main()
{
    int arr[100],sumarr[100],n=0,num,digit,sum,i,j,temp;
    printf("Enter numbers (enter 0 to stop):\n");
    while(1)
    {
        scanf("%d",&num);
        if(num==0)
            break;
        arr[n]=num;   
        n++;            
    }
    for(i=0;i<n;i++) 
    {
        num=arr[i];
        sum=0;
        while(num!=0) 
        {
            digit=num % 10;
            sum+=digit;
            num/=10;
        }
        sumarr[i]=sum;
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(sumarr[i] > sumarr[j]) {
                temp=sumarr[i];
                sumarr[i]=sumarr[j];
                sumarr[j]=temp;
            }
        }
    }
    printf("\nAscending Order : \n");
    for(i=0;i<n;i++)
        printf("%d\n",sumarr[i]);
    return 0;
}
