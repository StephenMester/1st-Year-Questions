#include <stdio.h>


float const pi = 3.14;

//Q1
void square_area (float *, float *);
void circle_area (float *);


int main()
{

    //Q1
    float radius = 0;
    float square_lenght = 0;
    float square = 0;
    float circle = 0;

    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);
    printf("\n\nEnter the lenght of 1 side of a square\n");
    scanf("%f", &square_lenght);

    square = square_lenght;
    circle = radius;

    square_area (&square, &circle);

    printf("%.2f\n", square);
    printf("%.2f\n", circle);

    return 0;
}

//Q1
void square_area (float *N1, float *N2)
{
    *N1 = *(N1) * *(N1);
    circle_area (N2);
}

void circle_area (float *N1)
{
    *N1 = (*N1 * *N1) * pi;
}