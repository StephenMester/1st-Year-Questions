#include <stdio.h>
#define SIZEX 5
#define SIZEY 5


int main()
{
    int a [10];
    int i = 0;
    int j = 0;
    int list2d[SIZEX][SIZEY];
    int max = 0;
    int min = 0;
    int total = 0;
    int counter = 0;
    float average = 0;
    int x = SIZEX;
    int y = SIZEY;
    int list1d1[SIZEX];
    int list1d2[SIZEY];
    
    
    // q1
    /*
    for(i = 0; i < 10; i++)
    {
        a[i] = 9 - i;
        printf("first %d\n", a[i]);
    }
    for(i = 0; i < 10; i++)
    {
        a[i] = a[a[i]];
        printf("%d\n", a[i]);
        printf("i%d\n", i);
    }
    printf("%d", a[8]);*/




    //q2
    /*
    for (i = 0; i < SIZEX; i++)
    {
        for (j = 0; j < SIZEY; j++)
        {
            
            scanf("%d", &list2d[i][j]);
            printf("\nrow,%d col%d contains %d\n\n", i, j, list2d[i][j]);
            if (list2d[i][j] > max)
            {
                max = list2d[i][j];
            }
            else if (list2d[i][j] < min)
            {
                min = list2d[i][j];
            }

            total = total + list2d[i][j];
            counter = counter + 1;
        }//end inner for
    }//end outer for
    
    printf("total %d counter %d", total, counter);
    average = (float)total/(float)counter;
    
    printf("max %d, min %d", max, min);
    printf("\naverage is %.2f", average);
    */



    //q4 c
    
    x = x -1;
    y = y -1;
    
    for (i = 0; i < SIZEX; i++)
    {
        for (j = 0; j < SIZEY; j++)
        {
            counter = counter + 1;
            printf("Enter %d number\n", counter);
            scanf("%d", &list2d[x - i][y - j]);
        }
    }
    counter = 0;
    for (i = 0; i < SIZEX; i++)
    {
        for (j = 0; j < SIZEY; j++)
        {  
            counter = counter + 1;
            printf("%d number = %d\n", counter, list2d[i][j]);
        }
    }
    





    //q5
    /*for (i = 0; i < SIZEX; i++)
    {
        printf("Enter List1 Numbers\n");
        scanf("d", &list1d1[i]);
    }
    for (j = 0; j < SIZEY; j++)
    {
        printf("Enter List2 Numbers\n");
        scanf("d", &list1d2[i]);
    }
    i = 0;
    j = 0;
    for (i = 0; i < SIZEX; i++)
    {
        for (j = 0; j < SIZEY; j++)
        {
            if (i == j)
            {
                total = list1d1[i] * list1d2[j];
                printf ("The sum of %d and %d is %d", list1d1[i], list1d2[j], total);
            }
        }
    }
    */

    




}//end main1
