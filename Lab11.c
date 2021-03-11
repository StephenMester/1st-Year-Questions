#include <stdio.h>
#include <stdlib.h>

#define AMOUNTOFCALC 1
#define SIZEQ10 8
#define SIZEQ11 5



int main()
{
   
   // Q2
   /*
    int *ptr;
 	int numbers = 0;
 	//int no_bytes = 0;
 	int i;
 
 
 	// Part 1
 	// How many numbers, i.e., data items do you wish to enter
 	printf("\nHow many numbers will you enter?\n");
 	scanf("%d", & numbers);
 
 
 
 	// Part 2 NOT NEEDED
 	// Calculate the number of bytes required to store the set of numbers in memory
 	//no_bytes = numbers * sizeof(int);
 
 	// Part 3
 	// Allocate the block of memory required
 	ptr = calloc(numbers, sizeof(int));
 
 	// Part 4
 	// Check if malloc was successful, i.e., check if the memory was allocated successfully
 	if(ptr == NULL)
 	{
   		printf("\nFailed to allocate memory\n");
 	} // end if
 	else // memory allocated successfully
 	{
   		// Part 5
   		// memory allocated successfully - go and use it
   		printf("\nMemory allocated successfully\n");
   		printf("\nEnter the set of %d numbers\n", numbers);
 
   		// Enter data items into the allocated memory block
   		for(i = 0; i < numbers; i++)
   		{
     			scanf("%d", & *(ptr + i));
 
   		} // end for
  
 
   		printf("\nYour memory block contains:\n");
 
   		// Display the data items entered into the allocated memory block
   		for(i = 0; i < numbers; i++)
   		{
     			printf("%d  %p\n", *(ptr + i), (ptr + i) );
 
   		} // end for
 
   		// Part 6
   		// Free the allocated memory block once finished using it
   		free(ptr);
 
 	} // end else */


    //Q3
    /*
    float *ptr;
    float *ptr2;
    int i = 0;
    float num = 0;
    float total = 0;
    float average = 0;

    printf("How many numbers do you wish to enter\n");
    scanf("%f", &num);

    ptr = calloc(num, sizeof(float));

    if(ptr == NULL)
 	{
   		printf("\nFailed to allocate memory\n");
 	} // end if
 	else // memory allocated successfully
 	{
   		// Part 5
   		// memory allocated successfully - go and use it
   		printf("\nMemory allocated successfully\n");
   		printf("\nEnter the set of %d numbers\n", num);
    }

    printf("\nEnter the set of numbers\n");
    
    for (i = 0; i < num; i++)
    {
        scanf("%f", & *(ptr+i));
    }

    printf("\n");

    for (i = 0; i < num; i++)
    {
        printf("%.2f\n",*(ptr+i));
        total = total + *(ptr+i);
    }

    average = total/num;
    printf ("\n%.2f", average);

    ptr2 = calloc(AMOUNTOFCALC , sizeof(float));

    if(ptr2 == NULL)
 	{
   		printf("\nFailed to allocate memory\n");
 	} // end if
 	else // memory allocated successfully
 	{
   		// Part 5
   		// memory allocated successfully - go and use it
   		printf("\nMemory allocated successfully\n");
    }


    for (i = 0; i < AMOUNTOFCALC; i++)
    {
        *(ptr2+i) = average;
        printf("\n%.2f\n",*(ptr2+i));
    }
    */

    //Q10
    /*char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i = 0;

    for (i = 0; i < SIZEQ10; i++)
    {
        
        if (*(chars+i) == ' ')
        {
            *(chars+i) = '_';
        }
        
        printf("%c", *(chars+i));
    }
    */

    //Q11
    /*float liters[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    float mpl[SIZEQ11];
    int i = 0;

    for (i = 0; i < SIZEQ11; i++)
    {
        *(mpl+i) = (*(miles+i) / *(liters+i));
        printf ("%.2f\n", *(mpl+i));
    }  
    */

 	return 0;
 
} // end main()

