#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* tail,* head,* new_node, * temp;

void createDcll()
{
    int choice=1;
    head=NULL;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element for the List:\n");
        scanf("%d",&new_node->data);
        if (head==NULL)
        {
            head=tail=new_node;
            head->next=head;
        }
        else
        {
            tail->next=new_node;
            new_node->prev=tail;
            new_node->next=head;
            head->prev=new_node;
            tail=new_node;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void insertatBeg()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data for the First Element for the List:\n");
    scanf("%d",&new_node->data);
    if (head==NULL)
    {
        head=tail=new_node;
        new_node->prev=tail;
        new_node->next=head;
    }
    else
    {
        new_node->next=head;
        head->prev=new_node;
        new_node->prev=tail;
        tail->next=new_node;
        head=new_node;
    }
    
}

void insertatEnd()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data for the Last Element for the List:\n");
    scanf("%d",&new_node->data);
    if (head==NULL)
    {
        head=tail=new_node;
        new_node->prev=tail;
        new_node->next=head;
    }
    else
    {
        new_node->prev=tail;
        tail->next=new_node;
        new_node->next=head;
        head->prev=new_node;
        tail=new_node;
    }
    
}

void insertatPos()
{
    int pos,i=1,size=0;
    temp=head;
    printf("Enter the Position for Inserting:\n");
    scanf("%d",&pos);
    if(pos<1 && pos>size)
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
        printf("Enter Data for the position you want to Insert:\n");
        scanf("%d",&new_node->data);
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        new_node->prev=temp;
        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next=new_node;
    }

}

void display()
{
    temp=head;
    if(head==NULL)
    {
        printf("The List is Empty!\n");
    }
    else
    {
        while (temp!=tail)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);
    }
    
}

int main()
{
    createDcll();
    printf("The Created List is:\n");
    display();
    printf("\n");
    insertatBeg();
    printf("After Insertion the Created List is:\n");
    display();
    printf("\n");
    insertatEnd();
    printf("After Insertion the Created List is:\n");
    display();
    printf("\n");
    insertatPos();
    printf("After Insertion the Created List is:\n");
    display();
    return 0;
}