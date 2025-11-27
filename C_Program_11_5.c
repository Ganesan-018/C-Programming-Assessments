#include<stdio.h>
void memcopy(int*,int*,int);
int main()
{
    int source[5],i,destination[5];
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &source[i]);
    memcopy(source,destination,5);
    printf("Copy Array :\n");
    for (i = 0; i < 5; i++)
        printf("%d ", destination[i]);
    return 0;
}
void memcopy(int *src,int *dst,int size)
{
    for(int i=0;i<size;i++)
        *(dst+i)=*(src+i);
}
