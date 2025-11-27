#include <stdio.h>
int main()
{
    int arr[100], n = 0, num, sum = 0;
    printf("Enter numbers (enter 0 to stop):\n");
    while(1)
    {
        scanf("%d", &num);
        if(num == 0)
            break;
        arr[n] = num;   
        n++;            
    }
    if(n%2!=0 && arr[0]==arr[n-1])
        printf("Middle number : %d",arr[n/2]);
    else
    {
        num=arr[n/2]+arr[(n/2)+1];
        printf("Average of middle two numbers : %d",num/2);
    }
    return 0;
}
