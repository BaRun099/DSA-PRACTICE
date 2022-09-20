#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head,* new_node,* temp;

void createCll()
{
    int choice=1;
    head=NULL;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data for the List:\n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=temp=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        temp->next=head;
        printf("Do you want to continue<0/1>:\n");
        scanf("%d",&choice);
        
    }
    
}

void display()
{
    if (head==NULL)
    {
        printf("The Created List is Empty!\n");
    }
    else
    {
        temp=head;
        while (temp->next!=head)
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