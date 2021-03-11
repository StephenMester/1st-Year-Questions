#include <stdio.h>



//Function Signitures
/*

//Q1
void stars10 (void);

//Q2
void display_char (char, int);

//Q3
void high_low (int, int, int);

//Q4
float sum (int, int, int);
float average (int);
*/

int main()
{
    //Q1
    /* program to display 10 stars using a function */
    /*
    stars10();
    */

    //Q2
    /* program that uses a function which takes 2 paramaters
    a char and an int which displays the char a certain
    number of times based on the int */ 

    
    char lett;
    int num;

    printf("Enter the letter you wish to display");
    scanf("%c", &lett);
    printf("\nHow many times do you want it displayed?");
    scanf("%d", &num);

    display_char(lett,num);
    */

    //Q3
    /* program to find the highest and lowest of 3 numbers
    using a function */

    /*
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter 3 numbers\n");
    printf("#1\n");
    scanf("%d", &num1);
    printf("#2\n");
    scanf("%d", &num2);
    printf("#3\n");
    scanf("%d", &num3);
    printf("\n");

    high_low(num1,num2,num3);
    */

    //Q4
    /* program that uses two functions getting 3 numbers
    in main one getting the sum and one to find
    the average*/

    /*
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    float average = 0;

    printf("Enter 3 numbers\n");
    printf("#1\n");
    scanf("%d", &val1);
    printf("#2\n");
    scanf("%d", &val2);
    printf("#3\n");
    scanf("%d", &val3);
    printf("\n");

    average = sum(val1,val2,val3);
    printf("Average is %.2f", average);
    */

    return 0;
}

//Functions


//Q1
void stars10 (void)
{
    printf("**********");
}

//Q2
void display_char (char letter, int repeat)
{
    int i = 0;
    for (i = 0; i < repeat; i++)
    {
        printf("%c", letter);
    }//End if
}

Q3
void high_low (int N1, int N2, int N3)
{
    int high = 0;
    int low = 0;

    if (N1 > N2)
    {
        if (N1 > N3)
        {
            
            high = N1;
            
            if (N2 < N3)
            {
                low = N2;
            }//End if3
            else
            {
                low = N3;
            }//End else3
        }//End if2
        else
        {
            high = N3;
            low = N2;
        }//End else2
    }//End if1
    else
    {
        if (N2 > N3)
        {
            high = N2;
            if (N3 < N1)
            {
                low = N3;
            }//End if3
            else
            {
                low = N1;
            }//End else3
            
        }//End if2
        else
        {
            high = N3;
            low = N1;
        }//End else2
    }//End else1

    printf("High = %d\nLow = %d", high, low);
}

//Q4
float sum (int numb1, int numb2, int numb3)
{
    int total = 0;
    float average2 = 0;
    total = numb1+numb2+numb3;
    average2 = average(total);
    return average2;
}

float average (int total)
{
    float result = 0;
    result = total/3;
    return result;
}
