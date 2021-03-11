#include <stdio.h>
#include <time.h>

int main()
{
    //Q1
    
    /*Code to create a sum of fractions up to N=100*/
/*
    //Variable list
    int i = 1;
    float total = 0;
    float start_c = 0;
    float end_c = 0;
    float total_time = 0;
    float fraction = 0;
    int N = 100;

    start_c = clock();

    //For loop to sum fractions
    for (i = 1 ; i < N ; i++)
    {
        fraction = 1/(float)i;
        total = total + fraction;
    }//End for

    end_c = clock();

    total_time = end_c - start_c;

    printf("%.2f\n", total);
    printf("%.2f Time", total_time);
*/

    //Q2

    /*Program to convert decimal numbers to binary*/

    //Variable list
    int num = 0;
    int i = 0;
    int display [8] = {0,0,0,0,0,0,0,0};

    printf("Enter number to be converted up to an 8 Bit number\n");
    scanf("%d", &num);

    while (num > 256) //Stop people from entering bigger numbers
    {
        printf("Please enter an 8 bit number\n");
        scanf("%d", &num);
    }



    if (num >= 128)
    {
        display [7] = 1;
        num = num - 128;
    }

    if (num >= 64)
    {
        display [6] = 1;
        num = num - 64;
    }

    if (num >= 32)
    {
        display [5] = 1;
        num = num - 32;
    }

    if (num >= 16)
    {
        display [4] = 1;
        num = num - 16;
    }

    if (num >= 8)
    {
        display [3] = 1;
        num = num - 8;
    }

    if (num >= 4)
    {
        display [2] = 1;
        num = num - 4;
    }

    if (num >= 2)
    {
        display [1] = 1;
        num = num - 2;
    }

    if (num >= 1)
    {
        display [0] = 1;
        num = num - 1;
    }

    for (i = 0; i < 8; i++)
    {
        printf("%d", display[i]);
    }

    return 0;
}