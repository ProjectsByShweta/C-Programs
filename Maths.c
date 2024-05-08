#include<stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int A = 100;
    int B = 400;
    int Ret = 0;

    printf("Inside main function\n");

    Ret = Addition(A,B);

    printf("Addition is : %d\n",Ret);

    return 0;
}