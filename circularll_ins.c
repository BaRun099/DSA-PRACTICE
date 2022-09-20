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

void insertatBeg()
{
    new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter The Element of the first Element of List:\n");
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
        }
}

void insertatEnd()
{
    int choice=1;
    while(choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter The Element of the last Element of List:\n");
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

void insertatPos()
{
    int pos,i=1,size=0;
    printf("Enter the position u want to insert:\n");
    scanf("%d",&pos);
    if (pos<0 && pos>size)
    {
        printf("You entered an Invalid Position!\n");
    }
    else if (pos==1)
    {
        insertatBeg();
    }
    else
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter The  Element of List:\n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        temp=tail->next;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        new_node->next=temp->next;
        temp->next=new_node;
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
    printf("\n");
    insertatBeg();
    printf("After Insertion the Created Circular List is:\n");
    display();
    printf("\n");
    insertatEnd();
    printf("After Insertion the Created Circular List is:\n");
    display();
    printf("\n");
    insertatPos();
    printf("After Insertion the Created Circular List is:\n");
    display();
    return 0;
}