#include<stdio.h>
#define N 50
int stack[N];
int top=-1;

void push()
{
    int x,choice=1;
    while(choice)
    {
    printf("Enter the Element for the Stack:\n");
    scanf("%d",&x);
    if (top==N-1)
    {
        printf("The Stack is is OVERFLOW!\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
    printf("Do you want to continue<0/1>:\n");
    scanf("%d",&choice);
    }

}

void pop()
{
    int item;
    if (top==-1)
    {
        printf("The Stack is in UNDERFLOW!\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("The Deleted Item is: %d",item);
    }
    
}

void peek()
{
    if (top==-1)
    {
        printf("The Stack is Empty!");
    }
    else
    {
        printf("The Top Element of the Stack is: %d",stack[top]);
    }

}

void display()
{
    int i;
    for ( i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
    
}

int main()
{
    push();
    printf("After Inserting Elements the Stack is:\n");
    display();
    pop();
    printf("\n");
    printf("After Removing Elements the Stack is:\n");
    display();
    peek();
    printf("\n");
    printf("The Stack is:\n");
    display();
    return 0;
}