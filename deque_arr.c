#include<stdio.h>
#define N 50
int deque[N];
int front=-1;
int rear=-1;

void enqueue_front()
{
    int x,choice=1;
    while (choice)
    {
        printf("Enter the Element for front of the Queue:\n");
        scanf("%d",&x);
        if ((front==0 && rear==N-1) || (front==rear+1))
        {
            printf("The Queue is Full!\n");
        }
        else if (front==-1 && rear==-1)
        {
            front=rear=0;
            deque[front]=x;
        }
        else if (front==0)
        {
            front=(N-1);
            deque[front]=x;
        }
        else
        {
            front--;
            deque[front]=x;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void enqueue_rear()
{
    int y,choice=1;
    while (choice)
    {
        printf("Enter the Element from the rear for the Deque:\n");
        scanf("%d",&y);
        if (front==-1 && rear==-1)
        {
            front=rear=0;
            deque[rear]=y;
        }
        else if (rear==N-1)
        {
            rear=0;
            deque[rear]=y;
        }
        else
        {
            rear++;
            deque[rear]=y;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void dequeue_front()
{
    int choice=1;
    while (choice)
    {
        if (front==-1 && rear==-1)
        {
            printf("The Queue is Empty!\n");
        }
        else if (front==rear)
        {
            front=rear=-1;
        }
        else if (front==N-1)
        {
            printf("%d\n",deque[front]);
            front=0;
        }
        else
        {
            printf("The Removed element from Front is: %d\n",deque[front]);
            front++;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
}

void dequeue_rear()
{
    int choice=1;
    while (choice)
    {
        if (front==-1 && rear==-1)
        {
            printf("The Queue is Empty!\n");
        }
        else if (front==rear)
        {
            front=rear=-1;
        }
        else if (rear==0)
        {
            printf("%d\n",deque[rear]);
            rear=N-1;
        }
        else
        {
            printf("\nThe Removed Element from Rear is: %d\n",deque[rear]);
            rear--;
        }
        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }

}

void get_front()
{
    printf("\nThe Front element of the Deque is: %d\n",deque[front]);
}

void get_rear()
{
    printf("\nThe Rear Element of the Deque is: %d\n",deque[rear]);
}

void display()
{
    int i=front;
    while (i!=rear)
    {
        printf("%d\t",deque[i]);
        i=(i+1)%N;
    }
    printf("%d\t",deque[rear]);
}

int main()
{
    enqueue_front();
    printf("\n");
    enqueue_rear();
    printf("The Created Deque is:\n");
    display();
    get_front();
    get_rear();
    dequeue_front();
    printf("After Delete from the Front the Deque is:\n");
    display();
    dequeue_rear();
    printf("After Delete from the Rear the Deque is:\n");
    display();
    get_front();
    get_rear();
    return 0;
}