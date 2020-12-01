#include <stdio.h>
#define SIZEX 3
#define SIZEY 2


int main()
{

    int total = 0;
    int i = 0;
    int j = 0;
    int y = 0;
    int x = 0;
    int array1 [SIZEX][SIZEY];
    int array2 [SIZEX][SIZEY];
    int array3 [SIZEX][SIZEY];
    int loop = 0;
    int temp = 0;
    int row = 0;
    int ymax;
    
    y = SIZEY;
    ymax = y - 1;

    int col [SIZEY];
    


    //Q1
    /*
    for (i = 0; i < SIZEX; i++)
    {
        for (j = 0; j < SIZEY; j++)
        {
            printf("\nadd to array 1\n");
            scanf("%d", &array1[i][j]);
            printf("\nadd to array 2\n");
            scanf("%d", &array2[i][j]);
            total = array1[i][j] * array2[i][j];
            array3[i][j] = total;
        }
    }


    for (i = 0; i < SIZEX; i++)
    {
        for (j = 0; j < SIZEY; j++)
        {
            printf("\nArray3 [%d][%d] contains %d X %d which is %d", i, j, array1[i][j], array2[i][j], array3[i][j]);
        }
    }
    */

    //Q3
    /*
    for (j = 0; j < SIZEY; j++)
    {
        col[j] = 0;
    }    
    
    for (i = 0; i < SIZEX; i++)
    {
        for (j = 0; j < SIZEY; j++)
        {
            printf("\nadd to array 1\n");
            scanf("%d", &array1[i][j]);
        }
    }

    for (i = 0; i < SIZEX; i++)
    {
        
        row = 0;

        for (j = 0; j < SIZEY; j++)
        {
            row = row + array1[i][j];
            if (j == ymax)
            {
                printf("\nThe sum of row %d is %d\n", i, row);
            }

            col[j] = col[j] + array1[i][j];

        }   
    }

    for (j = 0; j < SIZEY; j++)
    {
        printf("\nthe sum of col %d is %d\n", j, col[j]);
    }
    */


    return 0;
}//End Main