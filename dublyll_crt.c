#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head,* new_node,* temp;

void createDll()
{
    head=NULL;
    int choice=1;
    while(choice)
    {
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element of the List:\n");
    scanf("%d",&new_node->data);
    new_node->prev=NULL;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=temp=new_node;
    }
    else
    {
        temp->next=new_node;
        new_node->prev=temp;
        temp=new_node;
    }
    printf("Do you want to continue<0/1>:\n");
    scanf("%d",&choice);
    }
}

void display()
{
    temp=head;
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }   
}

int main()
{
    createDll();
    printf("The Created Doubly Linked List is:\n");
    display();
    return 0;
}