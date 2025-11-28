#include<stdio.h>
#include<stdlib.h>
struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};
struct student *top=NULL;
struct student *createNode(int id,int m,int s) 
{
    struct student *newNode=(struct student*)malloc(sizeof(struct student));
    newNode->id=id;
    newNode->Maths=m;
    newNode->Science=s;
    newNode->next=NULL;
    return newNode;
}
void push()
{
    int id,m,s;
    printf("Enter: ID Maths Science = ");
    scanf("%d %d %d", &id,&m,&s);
    struct student *newNode=createNode(id,m,s);
    newNode->next=top;
    top=newNode;
}
void pop() 
{
    if(top==NULL) 
    {
        printf("Stack is empty!\n");
        return;
    }
    struct student *temp=top;
    top=top->next;
    free(temp);
}
void displayStack() 
{
    if(top==NULL) 
    {
        printf("\nStack is empty!\n");
        return;
    }
    struct student *temp=top;
    printf("\n Stack \n");
    while(temp!=NULL) 
    {
        printf("ID: %d Maths: %d Science: %d\n",
              temp->id,temp->Maths,temp->Science);
        temp=temp->next;
    }
}
int main() 
{
    int ch;
    while (1) 
    {
        printf("\nMenu:\n1. Push\n2. Pop\n3. Display Stack\n4. Exit\nChoose: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                push(); 
                break;
            case 2: 
                pop(); 
                break;
            case 3: 
                displayStack();
                break;
            case 4: 
                return 0;
            default: 
                printf("Invalid option!\n");
        }
    }
}
