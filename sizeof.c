#include<stdio.h>

int main()
{
    char ch = 'A';            //1byte
    int i = 11;               //4byte    
    float f = 90.89;          //4byte 
    double d = 90.098765;     //8byte

    char arr[5];              //5 bytes    
    int brr[5];               //20 bytes
    double crr[5];            //40 bytes 
    float drr[5];             //20 bytes

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(brr));
    printf("%d\n",sizeof(crr));
    printf("%d\n",sizeof(drr));

    return 0;
}