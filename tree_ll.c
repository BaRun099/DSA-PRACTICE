#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create()
{
    int x;
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data(-1 for no node):\n");
    scanf("%d",&x);
    if (x==-1)
    {
        printf("The Tree node is Empty!\n");
        return 0;
    }
    new_node->data=x;
    printf("Enter the Left child of %d",x);
    new_node->left=create();
    printf("Enter the Right child of %d",x);
    new_node->right=create();
    return new_node;
}

void preorder(struct node* root)
{
    if (root==0)
    {
        printf("The Tree node is Empty!\n");
        return;
    }
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root)
{
    if (root==0)
    {
        printf("The Tree node is Empty!\n");
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}

void inorder(struct node* root)
{
    if (root==0)
    {
        printf("The Tree node is Empty!\n");
        return;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
void main()
{
    struct node* root;
    root=0;
    root=create();
    printf("The preorder of the tree is:\n");
    preorder(root);
    printf("\n");
    printf("The postorder of the tree is:\n");
    postorder(root);
    printf("\n");
    printf("The inorder of the tree is:\n");
    inorder(root);
}