#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* tail;
struct node* new_node;
struct node* temp;
void createCll()
{
    int choice=1;
    tail=NULL;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter The Element of the List:\n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(tail==NULL)
        {
            tail=new_node;
            tail->next=new_node;
        }
        else
        {
            new_node->next=tail->next;
            tail->next=new_node;
            tail=new_node;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void revCll()
{
    struct node* current, * prev,* next_node;
    current=tail->next;
    next_node=current->next;
    if (tail==NULL)
    {
        printf("The List is Empty!\n");
    }
    else
    {
        while (current!=tail)
        {
            prev=current;
            current=next_node;
            next_node=current->next;
            current->next=prev;
        }
        next_node->next=tail;
        tail=next_node;
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
    printf("The Created List is:\n");
    display();
    printf("\n");
    revCll();
    printf("After Reversing the Created List is:\n");
    display();
    return 0;
}