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

void delfromBeg()
{
    temp=tail->next;
    if(tail==NULL)
    {
        printf("The List is Empty!\n");
    }
    else if (temp->next==temp)
    {
        tail=NULL;
        free(temp);
    }
    else
    {
        tail->next=temp->next;
        free(temp);
    }
    
    
}

void delfromEnd()
{
    struct node* current, * prev;
    current=tail->next;
    if (tail==NULL)
    {
        printf("The List is Empty!\n");
    }
    else if (current->next==current)
    {
        tail=NULL;
        free(current);
    }
    
    else
    {
        while (current->next!=tail->next)
        {
            prev=current;
            current=current->next;
        }
          prev->next=tail->next;
          tail=prev;
          free(current);
    }
}

void delfromPos()
{
    struct node* current, * next_node;
    int pos,i=1,size=0;
    current=tail->next;
    printf("Enter the position from where u want to delete:\n");
    scanf("%d",&pos);
    if (pos<0 && pos>size)
    {
        printf("You entered an Invalid Position!\n");
    }
    else if (pos==1)
    {
        delfromBeg();
    }
    else
    {
        while (i<pos-1)
        {
            current=current->next;
            i++;
        }
        next_node=current->next;
        current->next=next_node->next;
        free(next_node);
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