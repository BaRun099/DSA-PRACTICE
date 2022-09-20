#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* head, * new_node,* temp;

void createsll()
{
    head=NULL;
    int choice=1;
    while(choice)
    {
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element of the List:\n");
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
    printf("Do you want to continue<0/1>:\n");
    scanf("%d",&choice);
    }
}

void delfromBeg()
{
    if(head==NULL)
    {
        printf("The List is Empty!\n");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}

void delfromEnd()
{
    struct node* prev_node;
    temp=head;
    while (temp->next!=NULL)
    {
        prev_node=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=NULL;
    }
    else
    {
        prev_node->next=NULL;
    }
    free(temp);
}

void delfromPos()
{
    struct node* next_node;
    int pos,i=1;
    temp=head;
    printf("Enter the Position from where u want to Delete:\n");
    scanf("%d",&pos);
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    next_node=temp->next;
    temp->next=next_node->next;
    free(next_node);
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}


int main()
{
    createsll();
    printf("\nThe Created Singly Linked List is:\n");
    display();
    printf("\n");
    delfromBeg();
    printf("\nAfter Deletion the First Element the Singly Linked List is:\n");
    display();
    printf("\n");
    delfromEnd();
    printf("\nAfter Deletion the Last Element the Singly Linked List is:\n");
    display();
    printf("\n");
    delfromPos();
    printf("\nAfter Deletion the Element for the position the Singly Linked List is:\n");
    display();
    return 0;
}