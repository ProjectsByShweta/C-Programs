#include<stdio.h>

struct Demo
{
    int no;
    int data;
};

int main()
{
    struct Demo obj;

    struct Demo *ptr = &obj;

    obj.no = 11;
// . is direct accessing operator
    ptr->data = 21;
// -> is indirect accessing operator
    return 0;
}