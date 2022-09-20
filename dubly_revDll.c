#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head,* tail,* new_node,* temp;

void createDll()
{
    struct node* new_node;
    int choice=1;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element of the List:\n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        new_node->prev=NULL;
        if(head==NULL)
        {
            head=tail=new_node;
        }
        else
        {
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
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

void revDll()
{
    struct node* current,* next_node;
    current=head;
    while (current!=NULL)
    {
        next_node=current->next;
        current->next=current->prev;
        current->prev=next_node;
        current=next_node;
    }
    current=head;
    head=tail;
    tail=current;
    
}

int main()
{
    createDll();
    printf("The Created Doubly Linked List is:\n");
    display();
    printf("\n");
    revDll();
    printf("After Reverse the List is:\n");
    display();
    return 0;
}