# include <stdio.h>

//Q1
int even_odd (int);

//Q2
int average (int,int,int);

//Q3
int highest (int,int,int);

//Q4
char commonlett (char,char,char);

//Q6
void add_1_num (int*);

int main ()
{

    //Q1
    /*
    int num1 = 0;
    int evod = 0;

    printf("#1\n");
    scanf("%d", &num1);

    evod = even_odd(num1);

    if (evod == 0)
    {
        printf("\nEven");
    }
    else
    {
        printf("\nOdd");
    }
    */

    //Q2
    /*
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int catchreturn = 0;

    printf("#1\n");
    scanf("%d", &num1);
    printf("#2\n");
    scanf("%d", &num2);
    printf("#3\n");
    scanf("%d", &num3);

    catchreturn = average (num1,num2,num3);

    printf("\nAverage of %d, %d, %d is %d", num1, num2, num3, catchreturn);
    */

    //Q3
    /*
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int catchreturn = 0;

    printf("#1\n");
    scanf("%d", &num1);
    printf("#2\n");
    scanf("%d", &num2);
    printf("#3\n");
    scanf("%d", &num3);

    catchreturn = highest(num1,num2,num3);
    printf("\nHighest = %d", catchreturn);
    */
    
    //Q4
    /*
    char lett1;
    char lett2;
    char lett3;
    char catchreturn;

    printf("#1\n");
    do
        scanf("%c", &lett1);
    while (lett1 == '\n');
        printf("#2\n");
    do
        scanf("%c", &lett2);
    while (lett2 == '\n');
        printf("#3\n");
    do
        scanf("%c", &lett3);
    while (lett3 == '\n');
    catchreturn = commonlett (lett1,lett2,lett3);

    printf ("common letter in %c, %c, %c is %c",lett1, lett2, lett3, catchreturn);
    */

    //Q6
    int num1 = 0;
    
    printf("\nnumber\n");
    scanf ("%d", &num1);

    add_1_num (&num1);

    printf("%d", num1);

    return 0;
}

//Q1
int even_odd(int N1)
{
    int even_o = 0;
    even_o = N1%2;

    if (even_o > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


//Q2
int average (int N1, int N2, int N3)
{
    int add = 0;
    int divide = 0;

    add = N1+N2+N3;
    divide = add/3;

    return divide;

}

//Q3
int highest (int N1, int N2, int N3)
{
    
    if (N1>N2)
    {
        if (N1>N3)
        {
            return N1;
        }
        else
        {
            return N3;
        }
    }
    else
    {
        if (N2>N3)
        {
            return N2;
        }
        else
        {
            return N3;
        }
    }
}

//Q4
char commonlett (char C1, char C2, char C3)
{
    if (C2 == C3)
    {
        return C3;
    }
    else if (C2 == C1)
    {
        return C1;
    }
    else if (C1 == C3)
    {
        return C3;
    }
    else
    {
        return 'N';
    }
}

//Q6
void add_1_num (int *N1)
{
    *N1 = *N1 + 1;
}