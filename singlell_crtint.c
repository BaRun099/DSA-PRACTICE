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

void insertatBeg()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter Element for Beginning:\n");
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
}

void insertatEnd()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element to insert at End:\n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}

void insertatPos()
{
    int pos,i=1,size=0;
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
        printf("Enter the Element to insert at End:\n");
        scanf("%d",&new_node->data);
        while (--pos>1)
        {
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        size++;
        
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
    insertatBeg();
    printf("\nThe Created Singly Linked List is:\n");
    display();
    printf("\n");
    insertatEnd();
    printf("\nThe Created Singly Linked List is:\n");
    display();
    printf("\n");
    insertatPos();
    printf("\nThe Created Singly Linked List is:\n");
    display();
    return 0;
}
