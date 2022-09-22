#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* front=0;
struct node* rear=0;
struct node* new_node,* temp;
void enqueue()
{
    int x,choice=1;
    while (choice)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data for the Queue:\n");
        scanf("%d",&x);
        new_node->data=x;
        new_node->next=NULL;
        if (rear==0)
        {
            front=rear=new_node;
            rear->next=front;
        }
        else
        {
            rear->next=new_node;
            rear=new_node;
            rear->next=front;
        }
        printf("Do you want to continue<0/1>:\n");
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
    else if (front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else
    {
        front=front->next;
        rear->next=front;
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
        printf("The Top element is: %d\n",front->data);
    }
}

void display()
{
    temp=front;
    if (front==0 && rear==0)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        while (temp->next!=front)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
        
    }
}

int main()
{
    enqueue();
    printf("The Created Queue is:\n");
    display();
    printf("\n");
    dequeue();
    printf("After the Deletion the Queue is:\n");
    display();
    printf("\n");
    peek();
    printf("The Queue is:\n");
    display();
    return 0;
}