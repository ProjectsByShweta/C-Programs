#include<stdio.h>

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
    struct student Kranti;

    printf("Size of object is : %d\n",sizeof(Shweta)); 

    Shweta.RollNo = 11;
    Shweta.Division = 'A';
    Shweta.Marks = 90.58;
    Shweta.Age = 21;
    Shweta.Salary = 2200000;

    Kranti.RollNo = 12;
    Kranti.Division = 'B';
    Kranti.Marks = 92.32;
    Kranti.Age = 20;
    Kranti.Salary = 2500000;

    printf("Age of Shweta is : %d\n",Shweta.Age);
    printf("Age of Kranti is : %d\n",Kranti.Age);

    printf("Salary of Shweta is : %d\n",Shweta.Salary);
    printf("Salary of Shweta is : %d\n",Kranti.Salary);

    return 0;
}