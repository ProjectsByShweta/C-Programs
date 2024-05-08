#include<stdio.h>
int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("\nBase address of array is : %d\n",Arr);
    printf("Base address of array is : %d\n",&Arr);
    printf("Base address of array is : %d\n",&(Arr[0]));
    printf("Base address of array 2 is : %d\n",&(Arr[2]));

    printf("\nFirst element is : %d\n",Arr[0]);
    printf("Second element is : %d\n",Arr[1]);
    printf("Third element is : %d\n",Arr[2]);
    printf("Fourth element is : %d\n",Arr[3]);
    printf("Fifth element is : %d\n",Arr[4]);

    printf("\n%d\n",Arr[2]);
    printf("%d\n",*(Arr + 2));
    printf("%d\n",*(2 + Arr));
    printf("%d\n",2[Arr]);

    return 0;
}