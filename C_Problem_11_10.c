#include<stdio.h>
void strcon(char*,char*,char*);
int main()
{
    char source1[50],source2[50],destination[50];
    printf("Enter string for source1:\n");
    scanf("%[^\n]", &source1);
    printf("Enter string for source2:\n");
    scanf(" %[^\n]", &source2);
    strcon(source1,source2,destination);
    printf("Concatenated Strings : ");
    printf("%s",destination);
    return 0;
}
void strcon(char *src1,char *src2,char *dst)
{
    int j=0;
    for(int i=0;*(src1+i)!='\0';i++)
    {
       *(dst+j)=*(src1+i);
       j++;
    }
    for(int i=0;*(src2+i)!='\0';i++)
    {
        *(dst+j)=*(src2+i);
       j++;
    }
    dst[j]='\0';
}
