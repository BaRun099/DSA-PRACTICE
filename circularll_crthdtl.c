#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head, * tail, *new_node,* temp;

void createCll()
{
    int choice=1;
    head=NULL;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter Element for List:\n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=tail=new_node;
            tail->next=new_node;
        }
        else
        {
            tail->next=new_node;
            tail=new_node;
            tail->next=head;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void display()
{
    if(tail==NULL)
    {
        printf("The List is Empty!\n");
    }
    else
    {
        temp=tail->next;
        while (temp->next!=tail->next)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);
    }
    
}

int main()
{
    createCll();
    printf("The Created Circular List is:\n");
    display();
    return 0;
}
