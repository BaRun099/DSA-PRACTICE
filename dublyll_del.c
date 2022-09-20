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

void delfromBeg()
{
    temp=head;
    if(head==NULL)
    {
        printf("The List is Empty!\n");
    }
    else
    {
        head=head->next;
        head->prev=0;
        free(temp);
    }
    
}

void delfromEnd()
{
    if(tail==NULL)
    {
        printf("The Created List is Empty!\n");
    }
    else
    {
        temp=tail;
        tail->prev->next=NULL;
        tail=tail->prev;
        free(temp);
    }
    
}

void delfromPos()
{
    int pos,i=1;
    temp=head;
    printf("Enter the Position from where u want to Delete:\n");
    scanf("%d",&pos);
    while (i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    
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
    printf("\n");
    delfromBeg();
    printf("After Deletion the Created List is:\n");
    display();
    printf("\n");
    delfromEnd();
    printf("After Deletion the Created List is:\n");
    display();
    printf("\n");
    delfromPos();
    printf("After Deletion the Created List is:\n");
    display();
    return 0;
}
