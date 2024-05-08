#include<stdio.h>

struct Demo
{
    int no;
    float f;
    double d;
};

int main()
{
    struct Demo obj;

    obj.no = 11;
    obj.f = 90.99;
    obj.d = 89.9999;

    printf("Your int value is : %d\n",obj.no);
    printf("Your float value is : %f\n",obj.f);
    printf("Your double value is : %f\n",obj.d);

    return 0;
}