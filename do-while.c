#include<stdio.h>
int main()
{
  int i = 0;

  i = 1;                         //1
 
  do
  {
    printf("Jay Ganesh...\n");   //4

    i++;                         //3
  }  while(i<= 5);                   //2
  return 0;
}

//1:Counter initialization
//2:Loop conddition
//3:Loop displacement
//4:Loop body