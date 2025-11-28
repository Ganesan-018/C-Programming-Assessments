#include<stdio.h>
#include<stdlib.h>
struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};
struct student *head=NULL;
struct student *createNode(int id,int m,int s) 
{
    struct student *newNode=(struct student*)malloc(sizeof(struct student));
    newNode->id=id;
    newNode->Maths=m;
    newNode->Science=s;
    newNode->next=NULL;
    return newNode;
}
void addData()
{
    int id,m,s;
    printf("Enter: ID Maths Science = ");
    scanf("%d %d %d", &id,&m,&s);
    struct student *newNode=createNode(id,m,s);
    newNode->next=head;
    head=newNode;
}
void removeData() 
{
    if(head==NULL) 
    {
        printf("Queue is empty!\n");
        return;
    }
    if(head->next==NULL) 
    {
        free(head);
        head=NULL;
        printf("Removed last element.\n");
        return;
    }
    struct student *temp=head;
    struct student *prev=NULL;
    while (temp->next!=NULL) 
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}
void displayData() 
{
    if(head==NULL) 
    {
        printf("\nQueue is empty!\n");
        return;
    }
    struct student *temp=head;
    printf("\n Queue \n");
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
        printf("\nMenu:\n1. Add\n2. Remove\n3. Display\n4. Exit\nChoose: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                addData(); 
                break;
            case 2: 
                removeData(); 
                break;
            case 3: 
                displayData();
                break;
            case 4: 
                return 0;
            default: 
                printf("Invalid option!\n");
        }
    }
}
