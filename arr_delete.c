#include<stdio.h>
#define N 50

int main()
{
    int arr[N],size,i,pos,item=0;
    printf("Enter the size of the Array:\n");
    scanf("%d",&size);
    if(size>N)
    {
        printf("The Array is in OVERFLOW condition!\n");
    }
    else
    {
        printf("Enter the Element of the Array:\n");
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
    printf("\nEnter the Position U want to delete:\n");
    scanf("%d",&pos);
    if(pos<0 || pos>size)
    {
        printf("You entered an Invalid position!\n");
    }
    else
    {
        item=arr[pos-1];
        for ( i = pos-1; i < size-1; i++)
        {
            arr[i]=arr[i+1];
        }
            size--;
    }
    printf("The Deleted Element is: %d\n",item);
    printf("The Updated Array is:\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}