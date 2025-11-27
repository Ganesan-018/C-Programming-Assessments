#include <stdio.h>
#include <string.h>
void getnumbers(char*,char*);
void addnumbers(char*,char*,char*);
void print(char*);
int main() 
{
    char number1[51], number2[51], result[52];
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
    return 0;
}
void getnumbers(char *n1, char *n2) 
{
    printf("Enter number 1 up to 50 digits : ");
    scanf("%s",n1);
    printf("Enter number 2 up to 50 digits : ");
    scanf("%s",n2);
}
void addnumbers(char *n1,char *n2,char *result) 
{
    int i=strlen(n1)-1;
    int j=strlen(n2)-1;
    int k=50;  
    int carry=0;
    result[k+1]='\0';
    while (i>=0 || j>=0 || carry>0) 
    {
        int d1=(i >= 0)?*(n1 + i)-'0':0;
        int d2=(j>=0)?*(n2+j)-'0':0;
        int sum=d1+d2+carry;
        *(result+k)=(sum%10)+'0';
        carry=sum/10;
        i--;
        j--;
        k--;
    }
    while(k>=0) 
    {
        *(result+k)='0';
        k--;
    }
}
void print(char *result) 
{
    int i=0;
    while(*(result + i)=='0')
        i++;
    if (*(result + i)=='\0')
        printf("0\n");
    else
        printf("Result: %s\n",result+i);
}

