/*
Author: Stephen Mester C20483376
Date: 18/2/21

Program to convert celcius to farenheit using an array
also using celcius to find kelvin using functions
*/


#include <stdio.h>

#define SIZE 5 //size of the celcius array


//Function signitures

//Function to convert he celcius array into farenheit
float  convert_temp(float[]);

//Function to convert average celcius to kelvin
float in_kelvin(float);


int main()
{

    //Variable list
    float Celcius [SIZE];
    int i = 0;
    float av_celcius = 0;
    float av_kelvin = 0;


    //For loop to take user input
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter a celcius value for #%d\n", (i+1));
        scanf("%f", &Celcius[i]);
    }//End for

    //Call convert_temp to display values and get average C
    av_celcius = convert_temp(Celcius);
    printf("%.2fC Average Celcius\n\n", av_celcius);

    //Call in_kelvin to display average in kelvin
    av_kelvin = in_kelvin(av_celcius);
    printf("%.2fK Average Kelvin", av_kelvin);

    return 0;
}//End main

//Function to convert Celcius into Farenheit
float convert_temp (float carray[])
{
    int i = 0;
    float total = 0;
    float average = 0;
    float C = 0;
    float F = 0;

    //For loop to convert Celcius into Farenheit
    for (i = 0; i < SIZE; i++)
    {
        C = carray[i];
        
        //Formula for converting C to F
        F = ((carray[i] * 9) / 5) + 32;

        //Displays conversion for all elements in the array
        printf("%.2fC = %.2fF\n", C, F);
        
        //total needed to calculate average
        total = total + C;
    }//End for

    //Formula to calculate average using SIZE global
    average = total/SIZE;

    return average;

}//End convert_temp

//Function to convert average celcius to kelvin
float in_kelvin (float C)
{
    
    float kelvin = 0;

    //Formula to calculate Kelvin
    kelvin = C+273;

    return kelvin;

}//End in_kelvin