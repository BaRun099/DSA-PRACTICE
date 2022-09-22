#include<stdio.h>

#define N 50
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
    int x,choice=1;
    while(choice)
    {
        printf("Enter the Element of the Queue:\n");
        scanf("%d",&x);
        if (rear==N-1)
        {
            printf("The Queue is in OVERFLOW cnodition!\n");
        }
        else if (front==-1 && rear==-1)
        {
            front=rear=0;
            queue[rear]=x;
        }
        else
        {
            rear++;
            queue[rear]=x;
        }
        printf("Do you want to Continue<0/1>:\n");
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
        printf("The Delelted Element is: %d\n",queue[front]);
        front++;
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
        printf("Now the Top Element is: %d\n",queue[front]);
    }
    
}

void display()
{
    int i;
    if (front==-1 && rear==-1)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        for ( i = front; i < rear+1; i++)
        {
            printf("%d\n",queue[i]);
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
    printf("After Deletion the Queue is:\n");
    display();
    printf("\n");
    peek();
    printf("The queue is:\n");
    display();
    return 0;
}

