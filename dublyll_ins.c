#include<stdio.h>
#include<stdlib.h>
int size=0;
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head,* tail,* new_node,* temp;

void createdll()
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

void insertatBeg()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element for Beginning:\n");
    scanf("%d",&new_node->data);
    new_node->prev=NULL;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=tail=new_node;
    }
    else
    {
        head->prev=new_node;
        new_node->next=head;
        head=new_node;
    }
}

void insertatEnd()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element for End of List:\n");
    scanf("%d",&new_node->data);
    new_node->prev=NULL;
    new_node->next=NULL;
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
}

void insertatPos()
{
    int pos,size=0;
    printf("Enter the Position for Inserting:\n");
    scanf("%d",&pos);
    if(pos<1 && pos>size+1)
    {
        printf("You entered an Invalid Position!\n");
    }
    else if(pos==1)
    {
        insertatBeg();
    }
    else
    {
        temp=head;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element:\n");
        scanf("%d",&new_node->data);
        while(--pos>1)
        {
            temp=temp->next;
        }
        new_node->prev=temp;
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->next->prev=new_node;
        size++;
    }
}

void insertafterPos()
{
    int pos,i=0;
    printf("Enter the Position after which u Insert:\n");
    scanf("%d",&pos);
    if(pos<1 && pos>size+1)
    {
        printf("You entered an Invalid Position!\n");
    }
    else
    {
        temp=head;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element:\n");
        scanf("%d",&new_node->data);
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        new_node->prev=temp;
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->next->prev=new_node;
    }
}

void display()
{
    struct node* temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

int main()
{
    createdll();
    printf("The Created Doubly Linked List is:\n");
    display();
    printf("\n");
    insertatBeg();
    printf("After Insertition the Created Doubly Linked List is:\n");
    display();
    printf("\n");
    insertatEnd();
    printf("After Insertition the Created Doubly Linked List is:\n");
    display();
    printf("\n");
    insertafterPos();
    printf("After Insertition the Created Doubly Linked List is:\n");
    display();
    printf("\n");
    insertatPos();
    printf("After Insertition the Created Doubly Linked List is:\n");
    display();
    
    return 0;
}