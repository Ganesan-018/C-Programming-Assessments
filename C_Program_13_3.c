#include<stdio.h>
#include<stdlib.h>
struct student{
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
void displayList() 
{
    struct student *temp=head;
    if(temp==NULL) 
    {
        printf("\nList is empty!\n");
        return;
    }
    printf("\n Student List \n");
    while (temp!=NULL) 
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id,temp->Maths,temp->Science);
        temp=temp->next;
    }
}
void insertBefore(int keyID)
{
    int id,m,s;
    printf("Enter: ID Maths Science = ");
    scanf("%d %d %d",&id,&m,&s);
    struct student *newNode=createNode(id,m,s);
    if(head->id==keyID) 
    {
        newNode->next=head;
        head=newNode;
        return;
    }
    struct student *temp=head;
    while(temp->next!=NULL && temp->next->id!=keyID)
        temp=temp->next;
    if(temp->next==NULL) 
    {
        printf("ID not found!\n");
        free(newNode);
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void insertAfter(int keyID) 
{
    int id,m,s;
    printf("Enter: ID Maths Science = ");
    scanf("%d %d %d",&id,&m,&s);
    struct student *newNode=createNode(id,m,s);
    struct student *temp=head;
    while(temp!=NULL && temp->id!=keyID)
        temp=temp->next;
    if(temp==NULL) 
    {
        printf("ID not found!\n");
        free(newNode);
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void insertEntry() 
{
    int choice,key;
    printf("\nInsert:\n1. Before ID\n2. After ID\nEnter choice: ");
    scanf("%d",&choice);
    printf("Enter the key ID: ");
    scanf("%d",&key);
    if(choice==1)
        insertBefore(key);
    else if(choice==2)
        insertAfter(key);
    else
        printf("Invalid choice!\n");
}
void deleteEntry() 
{
    if(head==NULL) 
    {
        printf("List is empty!\n");
        return;
    }
    int key;
    printf("Enter ID to delete: ");
    scanf("%d",&key);
    if(head->id==key) 
    {
        struct student *temp=head;
        head=head->next;
        free(temp);
        printf("Deleted successfully.\n");
        return;
    }
    struct student *temp=head;
    while (temp->next!=NULL&&temp->next->id!=key)
        temp = temp->next;
    if(temp->next==NULL) 
    {
        printf("ID not found!\n");
        return;
    }
    struct student *delNode=temp->next;
    temp->next=delNode->next;
    free(delNode);
}
int main() 
{
    int ids[5]={1, 2, 3, 4, 5};
    int maths[5]={70, 60, 90, 55, 45};
    int sci[5]={65, 85, 92, 58, 48};
    struct student *temp=NULL;
    for (int i=0;i<5;i++) 
    {
        struct student *newNode=createNode(ids[i],maths[i],sci[i]);
        if (head==NULL) 
        {
            head=newNode;
            temp=newNode;
        } 
        else 
        {
            temp->next=newNode;
            temp=newNode;
        }
    }
    int ch;
    while(1){
        printf("\nMenu Items:\n1. Insert Entry\n2. Display List\n3. Delete Entry\n4. Exit\nChoose: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insertEntry();
                break;
            case 2: 
                displayList(); 
                break;
            case 3: 
                deleteEntry();
                break;
            case 4:
                return 0;
            default: 
                printf("Invalid option!\n");
        }
    }
    return 0;
}
