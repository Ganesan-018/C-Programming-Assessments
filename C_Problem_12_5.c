#include<stdio.h>
#include<string.h>
void getnumbers(char *n1,char *n2) 
{
    printf("Enter number 1 (up to 50 digits): ");
    scanf("%s",n1);
    printf("Enter number 2 (up to 50 digits): ");
    scanf("%s",n2);
}
void multiplynumbers(char *n1,char *n2,char *result) 
{
    int len1=strlen(n1);
    int len2=strlen(n2);
    int total=len1+len2;
    for (int i=0;i<total;i++)
        *(result+i)='0';
    *(result+total)='\0';
    for(int i=len1-1;i>=0;i--) 
    {
        int carry=0;
        int d1=*(n1+i)-'0';
        for(int j=len2-1;j>=0;j--) 
        {
            int d2=*(n2+j)-'0';
            int pos=i+j+1;
            int temp=(*(result+pos)-'0')+(d1*d2)+carry;
            *(result+pos)=(temp%10)+'0';
            carry=temp/10;
        }
        *(result+i)+=carry;
    }
}
void print(char *result) 
{
    int i=0;
    while(*(result+i)=='0')
        i++;
    if(*(result+i)=='\0')
        printf("Result: 0\n");
    else
        printf("Result: %s\n",result+i);
}
int main() 
{
    char number1[51], number2[51];
    char result[105];
    getnumbers(number1,number2);
    multiplynumbers(number1,number2,result);
    print(result);
    return 0;
}
