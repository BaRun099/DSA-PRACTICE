#include<stdio.h>
#define N 50
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
    int x,choice=1;
    while (choice)
    {
        printf("Enter the Element of the Queue:\n");
        scanf("%d",&x);
        if (front==-1 && rear==-1)
        {
            front=rear=0;
            queue[rear]=x;
        }
        else if ((rear+1)%N==front)
        {
            printf("The Queue is Full!\n");
        }
        else
        {
            rear=(rear+1)%N;
            queue[rear]=x;
        }
       printf("Do you want to continue<0/1>:\n");
       scanf("%d",&choice); 
    }
    
}

void dequeue()
{
    if (front==-1 && rear==-1)
        {
            printf("The Queue is Empty!\n");
        }
        else if (front==rear)
        {
            front=rear=-1;
        }
        else
        {
            printf("The Deleted Element id: %d\n",queue[front]);
            front=(front+1)%N;
        }

}

void peek()
{
    if (front==-1 && rear==-1)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        printf("The Top Element of the Queue is: %d\n",queue[front]);
    }
    
}

void display()
{
    int i=front;
    if (front==-1 && rear==-1)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        while (i!=rear)
        {
            printf("%d\n",queue[i]);
            i=(i+1)%N;
        }
        printf("%d\n",queue[rear]);
    }
}

int main()
{
    enqueue();
    printf("The Created Queue is:\n");
    display();
    printf("\n");
    dequeue();
    printf("After Delete the Top Element the Queue is:\n");
    display();
    printf("\n");
    peek();
    printf("The Queue is:\n");
    display();
    return 0;
}