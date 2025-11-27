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
    if(n>=4 && arr[0]==arr[n-1])
        printf("Success\n");
    else
        printf("Failure\n");
    return 0;
}
