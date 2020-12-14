#include <stdio.h>

#define SIZE 3

int main()
{
    
    float array [SIZE] = {1.1, 2.2, 3.3};
    float array2 [SIZE];
    float *ptr;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        *(array2 + i) = *(array + i);
        printf("%f == %f", *(array2 + i), *(array + i));
        printf("\n");
    }



    return 0;
}