#include<stdio.h>
int find_2digit_odd_sum7(int*);
int main()
{
    int arr[20],i,total;
    total=find_2digit_odd_sum7(arr);
    for(i=0;i<total;i++)
        printf("%d ",arr[i]);
    return 0;
}
int find_2digit_odd_sum7(int *ptr)
{
    int i=0,sum=0;
    for(int x=10;x<=99;x++)
    {
        if(x%2!=0)
        {
            sum=(x/10)+(x%10);
            if(sum==7)
            {
                *(ptr+i)=x;
                i++;
            }
        }
    }
    return i;
        
}
