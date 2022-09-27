#include<stdio.h>
#include<windows.h>

void main()
{
    int hr=0,min=0,sec=0;
    int d=1000;
    printf("Set the Time  to see the Clock functionning enter in HH:MM:SS format:\n");
    printf("Enter the Hour:\n");
    scanf("%d",&hr);
    printf("Enter the Minute:\n");
    scanf("%d",&min);
    printf("Enter the Second:\n");
    scanf("%d ",&sec);
    if (hr>12 || min>60 || sec>60)
    {
        printf("Error in Input!\n");
        exit(0);
    }
    while (1)
    {
        sec++;
        if (sec>59)
        {
            min++;
            sec=0;
        }
        if (min>59)
        {
            hr++;
            min=0;
        }
        if (hr>12)
        {
            hr=1; 
        }
       printf("\n\n\t\t\tThe Clock is:\n"); 
       printf("%02d:%02d:%02d",hr,min,sec);
       Sleep(d);
       system("cls");
    }
    
}