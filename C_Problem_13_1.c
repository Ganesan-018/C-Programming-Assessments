#include<stdio.h>
#include<stdlib.h>
struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};
struct student *head=NULL;
struct student* createNode(int id,int m,int s) 
{
    struct student *newNode=(struct student*)malloc(sizeof(struct student));
    newNode->id=id;
    newNode->Maths=m;
    newNode->Science=s;
    newNode->next=NULL;
    return newNode;
}
void insertEnd(int id,int m,int s) 
{
    struct student *newNode=createNode(id, m, s);
    if(head==NULL) 
    {
        head=newNode;
        return;
    }
    struct student *temp=head;
    while (temp->next!=NULL)
        temp=temp->next;
        temp->next=newNode;
}
void displayList() 
{
    struct student *temp=head;
    if(temp==NULL) 
    {
        printf("\nList is empty!\n");
        return;
    }
    printf("\n Student List \n");
    while(temp!=NULL) 
    {
        printf("ID: %d Maths: %d Science: %d\n",
               temp->id,temp->Maths,temp->Science);
        temp=temp->next;
    }
}
int main() 
{
    int id,m,s;
    while(1) 
    {
        printf("Enter ID (-1 to stop): ");
        scanf("%d", &id);
        if(id==-1)
            break;
        printf("Enter Maths and Science marks: ");
        scanf("%d %d",&m,&s);
        insertEnd(id,m,s);
    }
    displayList();
    return 0;
}
