#include<stdio.h>
void increment(int*,int);
int main()
{
    char str[50],ch;
    printf("Enter a string : ");
    scanf("%[^\n]",&str);
    printf("Enter a character : ");
    scanf(" %c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            printf("%d ",i+1);
    }
    return 0;
}
