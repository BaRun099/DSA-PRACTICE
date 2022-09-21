#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* tail,* head,* new_node, * temp;

void createDcll()
{
    int choice=1;
    head=NULL;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element for the List:\n");
        scanf("%d",&new_node->data);
        if (head==NULL)
        {
            head=tail=new_node;
            head->next=head;
        }
        else
        {
            tail->next=new_node;
            new_node->prev=tail;
            new_node->next=head;
            head->prev=new_node;
            tail=new_node;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void display()
{
    temp=head;
    if(head==NULL)
    {
        printf("The List is Empty!\n");
    }
    else
    {
        while (temp!=tail)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);
    }
    
}

int main()
{
    createDcll();
    printf("The Created List is:\n");
    display();
    return 0;
}