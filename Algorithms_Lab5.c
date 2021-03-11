#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Change LIST1  to 100 or 1000 to test for M and N 100 or 1000
#define LIST1 10



int main()
{

    //Variables
    float start = 0;
    float end = 0;
    int i = 0;
    int j = 0;
    int count = 0;
    int List1 [LIST1];
    int List1_check [LIST1];

    start = clock();
    printf("List1\n");
    for (i = 0; i < LIST1; i++)
    {
        List1[i] = rand() % 100;
        printf("%d\n", List1[i]);
        List1_check[i] = rand() % 100;

    }
    printf("\n");

    printf("List 1 Check\n");
    for (i = 0; i < LIST1; i++)
    {
        printf("%d\n", List1_check[i]);
    }

    for (i = 0; i < LIST1; i++)
    {
        for (j = 0; j < LIST1; j++)
        {
            if (List1[i] == List1_check[j])
            {
                count = count + 1;
                printf("\n%d and %d\n", List1[i], List1_check[j]);
            }
        }

        j = 0;

    }
    end = clock();

    printf("%d repeats in these lists\n", count);
    printf("Code took %.2f miliseconds to run", (end-start));

    return 0;
}
