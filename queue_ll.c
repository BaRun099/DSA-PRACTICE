#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
struct node* new_node,* temp;
void enqueue()
{
    int x,choice=1;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element for the Queue:\n");
        scanf("%d",&x);
        new_node->data=x;
        new_node->next=0;
        if (front==0 && rear==0)
        {
            front=rear=new_node;
        }
        else
        {
            rear->next=new_node;
            rear=new_node;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
}

void dequeue()
{
    temp=front;
    if (front==0 && rear==0)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        printf("The Deleted Element is: %d\n",front->data);
        front=front->next;
        free(temp);
    }
}

void peek()
{
    if (front==0 && rear==0)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        printf("The Top Element of the Queue is: %d\n",front->data);
    }
}

void display()
{

    if (front==0 && rear==0)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        temp=front;
        while (temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        
    }
}

int main()
{
    enqueue();
    printf("The Created Queue is:\n");
    display();
    printf("\n");
    dequeue();
    printf("After Deletion of the Created Queue is:\n");
    display();
    printf("\n");
    peek();
    display();
    return 0;
}