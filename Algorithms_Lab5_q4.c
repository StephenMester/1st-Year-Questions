#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fib(int);

int main()
{

    //Variables
    int choice = 0;
    int ans = 0;


    printf("\nEnter the number of fib you want to find\n");
    scanf("%d", &choice);

    ans = fib(choice);
    printf("%d", ans);



    return 0;
}

int fib(int N1)
{
    if (N1 == 1)
    {
        return 1;
    }
    else
    {
        return fib(N1-1) + fib(N1-2);
    }
}