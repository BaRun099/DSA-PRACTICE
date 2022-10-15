#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* front=NULL;
struct node* rear=NULL;
struct node* temp,* new_node;

void enqueue_front()
{
    int x,choice=1;
    front=NULL;
    while(choice)
    {
        if (front==NULL && rear==NULL)
        {
            front=rear=new_node;
        }
        else
        {
            new_node=(struct node*)malloc(sizeof(struct node));
            new_node->prev=NULL;
            printf("Enter the Element for the Queue1:\n");
            scanf("%d",&x);
            new_node->data=x;
            new_node->next=NULL;
            new_node->next=front;
            new_node->prev=rear;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void enqueue_rear()
{
    int y,choice=1;
    temp=rear;
    while (choice)
    {
        if (front==NULL || rear==NULL)
        {
            front=rear=new_node;
        }
        else
        {
            new_node=(struct node*)malloc(sizeof(struct node));
            new_node->prev=NULL;
            printf("Enter the Element for the Queue2:\n");
            scanf("%d",&y);
            new_node->data=y;
            new_node->next=NULL;
            rear->next=new_node;
            new_node->prev=rear;
            rear=new_node;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }

}

void display()
{
    temp=front;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    
}

int main()
{
    enqueue_front();
    enqueue_rear();
    display();
    return 0;
}