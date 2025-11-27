#include<stdio.h>
#include<string.h>
int main()
{
    char mainstr[50],substr[50];
    char *pos;
    int index;
    printf("Enter a main string : ");
    scanf("%[^\n]",&mainstr);
    printf("Enter a sub string : ");
    scanf(" %[^\n]",&substr);
    pos=strstr(mainstr,substr);
    if(pos!=NULL)
    {
        index=pos-mainstr;
        printf("Position : %d",index+1);
    }
    else
        printf("Substring not found");
    return 0;
}
