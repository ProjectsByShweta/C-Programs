#include<stdio.h>

 int main()
 {
    int No = 0;
    int Ans = 0;

    printf("Enter number: \n");
    scanf("%d",&No);

    Ans = No % 2;

    if(Ans == 0)  //jar ans madhe 0 asel tar
    {
        printf("Number is Even\n");
    }
    else // nahitar 
    {
        printf("Number is Odd");
    }

    return 0;
 }