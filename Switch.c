#include<stdio.h>

int main()
{
    int standard = 0;
    
    printf("Enter your standard :\n");
    scanf("%d",&standard);

    switch(standard)
    {
        case 1:
        printf("Your exam is at 7AM\n");
        break;
            
        case 2:
        printf("Your exam is at 8AM\n");
        break;
                    
        case 3:
        printf("Your exam is at 9AM\n");
        break;
        
        case 4:
        printf("Your exam is at 10AM\n");
        break;

        default:
        printf("wrong choice\n");
    }

    return 0;
}