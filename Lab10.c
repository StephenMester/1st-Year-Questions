#include <stdio.h>

#define SIZE 3

//program to copy array into array 2 using only pointer notation

int main()
{

    float array [SIZE];
    float array2 [SIZE];
    int i;
    
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f", (array + i));
        *(array2 + i) = *(array + i);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f == %.2f\n", *(array + i), *(array2 + i));
    }


    return 0;
}