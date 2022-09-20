#include<stdio.h>

#define N 50

int main()
{
    int arr[N],size,i,pos,num;
    printf("Enter the size of the Array:\n");
    scanf("%d",&size);
    if(size>N)
    {
        printf("The Array is in OVERFLOW condition!\n");
    }
    else
    {
        printf("Enter the Elements of the Array:\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("The Created Array is:\n");
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\nEnter the Element U want to insert:\n");
    scanf("%d",&num);
    printf("Enter the Position U want to Insert:\n");
    scanf("%d",&pos);
    if(pos<=0 || pos>size+1)
    {
        printf("You entered Invalid Position!\n");
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
    }
    printf("The Updated Array is:\n");
    for(i=0;i<size+1;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}