#include<stdio.h>

int x = 21;

extern int no;

extern void Marvellous();

int main()
{

    printf("Value of X is : %d\n",x);

    printf("Value of No is : %d\n",no);
    
    Marvellous();

    return 0;
}

/*
Definations  (Declaration + Defination)

int no;
int no = 10;
int no = 11;

Declaration 
extern int no;
*/