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
        sum += num;     
        n++;            
    }
    printf("\nTotal numbers entered: %d\n", n);
    printf("Sum of the numbers: %d\n", sum);
    return 0;
}
