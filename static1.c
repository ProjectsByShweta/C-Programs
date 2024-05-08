#include<stdio.h>

void Marvellous()
{
    static int x = 10;
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

/*
Where the memory gets allocated : Static Segment
What is the default value : 0 / 0.0 / '/0'
Whats is the scope : Inside Function
What is the lifetime : Global
*/