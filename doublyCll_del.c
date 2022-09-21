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

void delfromBeg()
{
    temp=head;
    if (head==NULL)
    {
        printf("The List is Empty!\n");
    }
    else if (head->next==head)
    {
        head=tail=NULL;
        free(temp);
    }
    else
    {
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }

}

void delfromEnd()
{
    temp=tail;
    if (tail==NULL)
    {
        printf("The List is Empty!\n");
    }
    else if (head->next==head)
    {
        head=tail=NULL;
        free(temp);
    }
    else
    {
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
    }
}

void delfromPos()
{
    int pos,i=1,size=0;
    temp=head;
    printf("Enter the Position from where u want to Delete:\n");
    scanf("%d",&pos);
    if (pos<1 && pos>size)
    {
        printf("You entered an Invalid Position!\n");
    }
    else if (pos==1)
    {
        delfromBeg();
    }
    else
    {
        while (i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if (temp->next==head)
        {
            tail=temp->prev;
            free(temp);
        }
        else
        {
            free(temp);
        }
         
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
    delfromBeg();
    printf("After Delete First Element the Updated List is:\n");
    display();
    printf("\n");
    delfromEnd();
    printf("After Delete Last Element the Updated List is:\n");
    display();
    printf("\n");
    delfromPos();
    printf("After Delete Element u want the Updated List is:\n");
    display();
    return 0;
}