#include <stdio.h>
#include <string.h>
#include <ctype.h>
void copystr(char *d,char *s)
{
    while(*s)
    {
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
}
int cmpstr(char *a,char *b)
{
    while(*a&&*b)
    {
        if(*a!=*b)
            return (*a-*b);
        a++;
        b++;
    }
    return (*a-*b);
}
void removespace(char *src,char *dest,int n)
{
    for(int i=0;i<n;i++)
        dest[i]=src[i];
    dest[n]='\0';
}
void removeLeadingZeros(char *str)
{
    int i=0,j=0;
    while(*(str+i)=='0')
        i++;
    if(*(str+i)=='\0')
    {
        *(str)='0';
        *(str+1)='\0';
        return;
    }
    while(*(str+i))
    {
        *(str+j)=*(str+i);
        j++;
        i++;
    }
    *(str+j)='\0';
}
int isValidNumber(char *s)
{
    while(*s)
    {
        if(!isdigit(*s))
            return 0;
        s++;
    }
    return 1;
}
void add(char *a,char *b,char *res)
{
    int i=strlen(a)-1;
    int j=strlen(b)-1;
    int k=100;
    int carry=0;
    *(res+k+1)='\0';
    while(i>=0||j>=0||carry)
    {
        int d1=(i>=0)?*(a+i)-'0':0;
        int d2=(j>=0)?*(b+j)-'0':0;
        int sum=d1+d2+carry;
        *(res+k)=(sum%10)+'0';
        carry=sum/10;
        i--;
        j--;
        k--;
    }
    while(k>=0)
        *(res+k--)='0';
    removeLeadingZeros(res);
}
void subtract(char *a,char *b,char *res)
{
    int lenA=strlen(a),lenB=strlen(b);
    int borrow=0,i=lenA-1,j=lenB-1,k=100;
    *(res+k+1)='\0';
    while(i>=0)
    {
        int d1=*(a+i)-'0'-borrow;
        int d2=(j>=0)?*(b+j)-'0':0;
        if(d1<d2)
        {
            d1+=10;
            borrow=1;
        }
        else 
            borrow=0;
        *(res+k)=(d1-d2)+'0';
        i--;
        j--;
        k--;
    }
    removeLeadingZeros(res);
}
void multiply(char *a,char *b,char *res)
{
    int len1=strlen(a),len2=strlen(b);
    int total=len1+len2;
    for(int i=0;i<total;i++)*(res+i)='0';
    *(res+total)='\0';
    for(int i=len1-1;i>=0;i--)
    {
        int carry=0;
        int d1=*(a+i)-'0';
        for(int j=len2-1;j>=0;j--)
        {
            int d2=*(b+j)-'0';
            int pos=i+j+1;
            int temp=(*(res+pos)-'0')+d1*d2+carry;
            *(res+pos)=(temp%10)+'0';
            carry=temp/10;
        }
        *(res+i)+=carry;
    }
    removeLeadingZeros(res);
}
int compare(char *a,char *b)
{
    removeLeadingZeros(a);
    removeLeadingZeros(b);
    int la=strlen(a),lb=strlen(b);
    if(la>lb)
        return 1;
    if(la<lb)
        return -1;
    for(int i=0;i<la;i++)
    {
        if(a[i]>b[i])
            return 1;
        if(a[i]<b[i])
            return -1;
    }
    return 0;
}
void divide(char *a,char *b,char *quot,char *rem)
{
    char zero[]="0";
    if(compare(b,zero)==0)
    {
        quot[0]='0';
        quot[1]='\0';
        rem[0]='0';
        rem[1]='\0';
        return;
    }
    char temp[105]="0",subRes[105];
    int lenA=strlen(a),qIndex=0;
    for(int i=0;i<lenA;i++)
    {
        int lenT=strlen(temp);
        *(temp+lenT)=*(a+i);
        *(temp+lenT+1)='\0';
        removeLeadingZeros(temp);
        int count=0;
        while(compare(temp,b)>=0)
        {
            subtract(temp,b,subRes);
            copystr(temp,subRes);
            count++;
        }
        *(quot+qIndex++)=count+'0';
    }
    *(quot+qIndex)='\0';
    removeLeadingZeros(quot);
    copystr(rem,temp);
    removeLeadingZeros(rem);
}
int main(){
    char input[200],a[60],b[60];
    char result[120],rem[120];
    while(1)
    {
        printf("Calc> ");
        scanf("%s",input);
        char exitcmd[]="Exit";
        if(cmpstr(input,exitcmd)==0)
            break;
        char op;
        int pos=-1;
        for(int i=0;input[i];i++)
        {
            if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/')
            {
                op=input[i];
                pos=i;
                break;
            }
        }
        if(pos==-1)
        {
            printf("Invalid expression.\n");
            continue;
        }
        for(int i=0;i<pos;i++)
            a[i]=input[i];
        a[pos]='\0';
        int k=0;
        for(int i=pos+1;input[i];i++)
            b[k++]=input[i];
        b[k]='\0';
        if(!isValidNumber(a)||!isValidNumber(b))
        {
            printf("Invalid number.\n");
            continue;
        }
        if(strlen(a)>50||strlen(b)>50)
        {
            printf("Number too large.\n");
            continue;
        }
        removeLeadingZeros(a);
        removeLeadingZeros(b);
        if(op=='+')
        {
            add(a,b,result);
            printf("%s\n",result);
        }
        else if(op=='-')
        {
            if(compare(a,b)<0)
            {
                printf("Negative result not allowed.\n");
            }
            else
            {
                subtract(a,b,result);
                printf("%s\n",result);
            }
        }
        else if(op=='*')
        {
            multiply(a,b,result);
            printf("%s\n",result);
        }
        else if(op=='/')
        {
            divide(a,b,result,rem);
            printf("Quotient: %s Remainder: %s\n",result,rem);
        }
    }
    return 0;
}
