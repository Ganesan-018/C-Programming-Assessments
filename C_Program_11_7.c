#include<stdio.h>
void memcomp(int*,int*,int);
int main()
{
    int source[5],i,destination[5];
    printf("Enter 5 integers for source:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &source[i]);
    printf("Enter 5 integers for destination:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &destination[i]);
    memcomp(source,destination,5);
    return 0;
}
void memcomp(int *src,int *dst,int size)
{
    for(int i=0;i<size;i++)
       if(*(dst+i)!=*(src+i))
       {
           printf("Failure");
           return;
       }
    printf("Success");
}
