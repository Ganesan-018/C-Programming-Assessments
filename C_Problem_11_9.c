#include<stdio.h>
void intcon(int*,int,int*,int,int*);
int main()
{
    int source1[5],source2[7],i,destination[12];
    printf("Enter 5 integers for source1:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &source1[i]);
    printf("Enter 7 integers for source2:\n");
    for (i = 0; i < 7; i++)
        scanf("%d", &source2[i]);
    intcon(source1,5,source2,7,destination);
    printf("Concatenated Array : ");
    for(i=0;i<12;i++)
        printf("%d ",destination[i]);
    return 0;
}
void intcon(int *src1,int size1,int *src2,int size2,int *dst)
{
    int j=0;
    for(int i=0;i<size1;i++)
    {
       *(dst+j)=*(src1+i);
       j++;
    }
    for(int i=0;i<size2;i++)
    {
        *(dst+j)=*(src2+i);
       j++;
    }
}
