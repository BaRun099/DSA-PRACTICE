#include<stdio.h>
#define N 5
int top1=-1, top2=-1;
int stack1[N], stack2[N];
int count=0;
int push1(int);
int push2(int);
int pop1();
int pop2();
void enqueue(int);
void dequeue();

void enqueue(int x)
{
    push1(x);
    count++;
}

void dequeue()
{
    int i,a,b;
    if (top1==-1 && top2==-1)
    {
        printf("The Queue is Empty!\n");
    }
    else
    {
        for ( i = 0; i < count; i++)
        {
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("%d\n",b);
        count--;
        for ( i = 0; i < count; i++)
        {
            a=pop2();
            push1(a);
        }
        
    }
    
}
int pop1()
{
    return stack1[top1--];
}

int pop2()
{
    return stack2[top2--];
}

int push1(int data)
{
    if (top1==N-1)
    {
        printf("The Queue is in OVERFLOW condition\n");
    }
    else
    {
        top1++;
        stack1[top1]=data;
    }
    
}

int push2(int data)
{
    if (top2==N-1)
    {
        printf("The Queue is in UNDERFLOW condition\n");
    }
    else
    {
        top2++;
        stack2[top2]=data;
    }
    
}

void display()
{
    int i;
    for ( i = 0; i <= top1; i++)
    {
        printf("%d\t",stack1[i]);
    }
    
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("\nThe Created Queue is:\n");
    display();
    printf("\nThe Removed Element is:\n");
    dequeue();
    printf("\nAfter Deletion the Created Queue is:\n");
    display();
    enqueue(40);
    printf("\nThe Created Queue is:\n");
    display();
    return  0;
}