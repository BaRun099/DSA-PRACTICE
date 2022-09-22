#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};
 struct node* top;

 void push()
 {
    int x,choice=1;
    top=NULL;
    while (choice)
    {
        struct node* new_node;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element for the Stack:\n");
        scanf("%d",&x);
        
            new_node->data=x;
            new_node->link=top;
            top=new_node;

        printf("Do you want to Continue<0/1>:\n");
        scanf("%d",&choice);
    }
    
 }

 void pop()
 {
    struct node * temp;
    temp=top;
    if (top==NULL)
    {
        printf("The Stack is in UNDERFLOW!\n");
    }
    else
    {
        printf("The pop element is: %d",top->data);
        top=top->link;
        free(temp);
    }

 }

 void peek()
 {
    if (top==NULL)
    {
        printf("The Stack is Empty!\n");
    }
    else
    {
        printf("The Top Element is: %d",top->data);
    }

 }

 void display()
 {
    struct node* temp;
    temp=top;
    if (top==NULL)
    {
        printf("The Stack is Empty!\n");
    }
    else
    {
        while (temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }   
    }
    
 }

 int main()
 {
    push();
    printf("The Created Stack is:\n");
    display();
    pop();
    printf("\n");
    printf("After Popping out the Element the Stack is:\n");
    display();
    peek();
    printf("\n");
    printf("The Stack is:\n");
    display();
    return 0;
 }