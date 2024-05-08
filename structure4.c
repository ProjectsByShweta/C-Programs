#include<stdio.h>

#pragma pack(1)

struct student
{
   int RollNo;       //4
   char Division;    //1
   int Age;          //4 
   float Marks;      //4 
   int Salary;       //4
};

int main()
{
    struct student Shweta;

    printf("Size of object is : %d\n",sizeof(Shweta)); 

    return 0;
}