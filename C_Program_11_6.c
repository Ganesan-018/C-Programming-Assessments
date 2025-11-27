#include<stdio.h>
void strcopy(char*,char*);
int main()
{
    char source[50],destination[50];
    printf("Enter a string :\n");
    scanf("%[^\n]",&source);
    strcopy(source,destination);
    printf("Copy String :\n");
    printf("%s",destination);
    return 0;
}
void strcopy(char *src,char *dst)
{
    for(int i=0;*(src+i)!='\0';i++)
        *(dst+i)=*(src+i);
}
