#include<stdio.h>
int main()
{
  int i = 0;

  i = 1;                         //1
  // jo paryant(i<=5) ahe toh paryant
  while(i<= 5)                   //2
  {
    printf("Jay Ganesh...\n");   //4

    i++;                         //3
  }
  return 0;
}

//1:Counter initialization
//2:Loop conddition
//3:Loop displacement
//4:Loop body