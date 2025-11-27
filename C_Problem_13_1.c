#include<stdio.h>
struct student
{
    int id;
    int maths;
    int science;
};
int main()
{
    struct student s[100];
    int i=0;
    while(1)
    {
        printf("Enter a student id : ");
        scanf("%d",&s[i].id);
        if(s[i].id==-1)
            break;
        printf("Enter a maths mark : ");
        scanf("%d",&s[i].maths);
        printf("Enter a science mark : ");
        scanf("%d",&s[i].science);
        i++;
    }
    for(int j=0;j<i;j++)
    {
        printf("Student %d \n",j+1);
        printf("Id : %d\n",s[j].id);
        printf("Maths Mark : %d\n",s[j].maths);
        printf("Science Mark : %d\n",s[j].science);
    }
    return 0;
}
