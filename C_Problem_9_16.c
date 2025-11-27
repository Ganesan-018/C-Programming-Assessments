#include <stdio.h>
int main()
{
    int a[50],b[50],c[50],i,carry=0,sum;
    printf("Enter 50 numbers for Array A : \n");
    for(i=0;i<50;i++)
        scanf("%d",&a[i]);
    printf("Enter 50 numbers for Array B : \n");
    for(i=0;i<50;i++)
        scanf("%d",&b[i]);
    printf("Enter 50 numbers for Array C : \n");
    for(i=0;i<50;i++)
        scanf("%d",&c[i]);
    for(i=49;i>=0;i--)
    {
        sum=a[i]+b[i]+carry;
        c[i+1]=sum%10;
        carry=sum/10;
    }
    c[0]=carry;
    printf("Result Array : \n");
    for(i=0;i<51;i++)
        printf("%d",c[i]);
    return 0;
}
