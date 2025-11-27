#include<stdio.h>
void increment(int*,int);
int main()
{
    int arr[5]={10,20,30,40,50};
    int size=5;
    printf("Original Array : \n");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    increment(arr,size);
    printf("\nArray after incremented : \n");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
void increment(int *ptr,int n)
{
    for(int i=0;i<n;i++)
        *(ptr+i)=*(ptr+i)+1;
}
