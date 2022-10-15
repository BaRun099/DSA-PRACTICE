#include<stdio.h>
void fibonacci();

void main()
{
    fibonacci();
}

void fibonacci()
{
    int n,i,fn,fn1,fn2;
    printf("Enter the number upto which u want to print:\n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Error input!\n");
        return;
    }
    if (n==0)
    {
        printf("%d",0);
        return;
    }
    if (n==1)
    {
        printf("%d",1);
        return;
    }
    fn2=0;
    fn1=1;
    for ( i = 2; i <= n; i++)
    {
        fn=fn1+fn2;
        fn2=fn1;
        fn1=fn;
    }
    for ( i = 2; i <= n; i++)
    {
        printf("%d\t",fn);
    }
}