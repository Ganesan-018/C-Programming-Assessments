#include<stdio.h>
void memcomp(char*,char*);
int main()
{
    char source[50],i,destination[50];
    printf("Enter string for source:\n");
    scanf("%[^\n]", &source);
    printf("Enter string for destination:\n");
    scanf(" %[^\n]", &destination);
    memcomp(source,destination);
    return 0;
}
void memcomp(char *src,char *dst)
{
    for(int i=0;*(src+i)!=0;i++)
       if(*(dst+i)!=*(src+i))
       {
           printf("Failure");
           return;
       }
    printf("Success");
}
