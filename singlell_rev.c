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

void reverse()
{
    struct node* prev_node,* current_node;
    if(head!=NULL)
    {
        prev_node=head;
        current_node=head->next;
        head=head->next;
        prev_node->next=NULL;
        while (head!=NULL)
        {
            head=head->next;
            current_node->next=prev_node;
            prev_node=current_node;
            current_node=head;
        }
        head=prev_node;
    }
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
    reverse();
    printf("After Reversing the Created Singly Linked List is:\n");
    display();
    return 0;
}