#include<stdio.h>

void Marvellous()
{
    int x = 10;
    x++;
    printf("Value of X is : %d\n",x);
}

int main()
{
    printf("Demonstration of Static storage class...\n");

    Marvellous();
    Marvellous();
    Marvellous();

    return 0;
}

