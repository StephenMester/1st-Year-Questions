#include <stdio.h>

/*
Author:Stephen Mester
Date:21/2/2021

Program to get a user inputed code and an acess code
encrypting the user code as well as an acess code
and checking if the code entered matches the acess code
all in a menu driven program
*/

#define CODESIZE 4

void encryption(int *);
void decryption(int *);

int main()
{

    //Variables
    
    //Lists
    int acess_code[CODESIZE];
    int user_code[CODESIZE];
    char stringarray[50];
    
    //Temorary or Index
    int i = 0;
    int t = 0;

    //Misc int
    int code = 0;
    int boolian = 0;
    int code_check = 0;
    int encrypted = 0;
    int missmatch = 0;
    int correct = 0;
    int incorrect = 0;
    int intcodechoice = 0;
    

    //Misc char
    char choice;
    char codechoice;
    
    //End Variables

    //initialize the authorised acess code to be 1,2,3,4... ect
    for (i = 0; i < CODESIZE; i++)
    {
        *(acess_code+i) = (i+1);
    }//End code initilization

    do
    {
        //Printf to display menu
        printf("\n\t\tMenu\n\n");
        printf("1) Enter code\n");
        printf("2) Encrypt code and verify\n");
        printf("3) Decrypt code\n");
        printf("4) Amount of sucessful and unsucessful code attempts\n");
        printf("5) Exit Menu\n\n");

        //Do while to keep getting user input
        do
        {    
            //scanf used to get the users first input all others are ignored
            scanf("%s", stringarray);
            choice = stringarray[0];

            //switch to check if valid input
            switch (choice)
            {
                case '1':
                    boolian = 1;
                    break;
                case '2':
                    boolian = 1;
                    break;
                case '3':
                    boolian = 1;
                    break;
                case '4':
                    boolian = 1;
                    break;
                case '5':
                    boolian = 1;
                    break;
                default:
                    printf("\nInvalid input\n");
                    boolian = 0;
                    break;

            }//End switch to check if valid input

        } while (boolian != 1);//End Do while to keep getting user input

        if (choice == '1')
        {
            //For loop to create user code
            for (i = 0; i < CODESIZE; i++)
            {
                
                printf("\nEnter #%d code number\n\n", (i+1));
                
                //do while loop to only let the user input a correct code number
                do
                {
                    //scanf to take the first character inputed by the user all other characters are ignored
                    scanf("%s", &stringarray);
                    codechoice = stringarray[0];            
                    
                    //Switch to convert user input into int and placed inside a 1-D array
                    switch(codechoice)
                    {
                        case '0':
                            intcodechoice = 0;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case'1':
                            intcodechoice = 1;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '2':
                            intcodechoice = 2;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '3':
                            intcodechoice = 3;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '4':
                            intcodechoice = 4;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '5':
                            intcodechoice = 5;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '6':
                            intcodechoice = 6;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '7':
                            intcodechoice = 7;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '8':
                            intcodechoice = 8;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        case '9':
                            intcodechoice = 9;
                            *(user_code+i) = intcodechoice;
                            boolian = 0;
                            break;
                        default:
                            boolian = 1;
                            printf("\ninvalid input\n");
                            break;
                    }//End Switch to convert user input into int 
                } 
                while (boolian != 0);
                //End do while to get user input
            }//End For loop to create user code

            //Displays confirmation message to user
            printf("\nCode initialized\n");
            
            //Check if a code has been entered atleast once
            code_check = 1;
        
        }//End choice 1 if
    
        if (choice == '2' && encrypted != 1 && code_check == 1)
        {

            printf("\n\nUser Code: ");

            //Encrypts the user inputed code and displays it for user
            encryption(user_code);
            for (i = 0; i < CODESIZE; i++)
            {
                printf("%d", *(user_code + i));
            }//End For loop to display User code         
            
            printf("\n\nAcess Code: ");

            //Encrypts the acess code and displays it for user
            encryption(acess_code);
            for (i = 0; i < CODESIZE; i++)
            {
                printf("%d", *(acess_code + i));
            }//End For loop to display User code

            //For loop to check user code vs acess code
            for (i = 0; i < CODESIZE; i++)
            {
                //If alse statement to check if code matches
                if (*(acess_code + i) == *(user_code + i))
                {
                    missmatch = 0;
                }
                else
                {
                    missmatch = 1;
                }//End If alse statement to check if code matches
            }//End For loop to check user code vs acess code

            //If else to increment correct or incorrect counter and display message 
            if (missmatch == 0)
            {
                printf("\nCorrect code entered!\n");
                correct = correct + 1;
            }
            else
            {
                printf("\nIncorrect code entered\n");
                incorrect = incorrect + 1;
            }//End if else to increment correct or incorrect counter and display message 

            //Encrypted set to 1 so if statement cannot be used again till decryption
            encrypted = 1;

        }//End choice 2 if
        
        //Else to display error message to user
        else 
        {
            //If statement to stop message from being displayed when user is not in choice 2
            if (choice == '2')
            {
                //If else statement to explain problem to user
                if (encrypted == 1)
                {
                    printf("\nUnable to encrypt a second time please decrypt the message before attempting to validate and encrypt again\n");
                }
                else if (code_check != 1)
                {
                    printf("\nNo User code given please enter a user code before attempting to validate and encrypt\n");
                } //End If else statement to explain problem to user
            }//End If statement to stop message from being displayed when user is not in choice 2
        }

        //Starts choice 3 makes sure it only runs if encryption has already been used
        if (choice == '3' && encrypted == 1)
        {
            
            printf("\n");

            //decrypts both codes
            decryption(acess_code);
            decryption(user_code);

            printf("Acess Code: ");
            
            //For loop to display decrypted acess code
            for (i = 0; i < CODESIZE; i++)
            {
                printf("%d", *(acess_code + i));
            }//End for loop to display decrypted acess code

            printf("\n");

            printf("User Code: ");

            //For loop to display decrypted user code
            for (i = 0; i < CODESIZE; i++)
            {
                printf("%d", *(user_code + i));

            }//End for to display decrypted user code

            printf("\n");

            //Sets encrypted counter to 0 makes sure youre unable to decrypt again without encrypting first
            encrypted = 0;

        }
        else 
        {
            //If to ensure message is only shown if choice 3 is selected
            if (choice == '3')
            {
                //Error message
                printf("\nCannot decrypt as code has not been encrypted yet\n"); 
            }//End if to ensure message is only shown if choice 3 is selected
        }//End of choice 3

        if (choice == '4')
        {
            printf("\n\nCode has been entered sucessfully: %d times\n", correct);
            printf("\nCode has been entered unsucessfully: %d times\n", incorrect);
        }


    }
    while (choice != '5');

    return 0;
}//End main

void encryption(int *code_Array)
{       
    int i = 0;
    int t = 0;
    int limit = CODESIZE;

    //limit set for switching numbers
    limit = limit/2; 

    //For to increment the numbers by 1
    for (i = 0; i < CODESIZE; i++)
    {
        *(code_Array+i) = (*(code_Array+i)) + 1;
        if (*(code_Array+i) == 10)
        {
            *(code_Array+i) = 0;
        }
    }//End for to increment by 1

    //For to switch the numbers in the array
    for (i = 0; i < limit; i++)
    {
        t = *(code_Array + i + 2);
        *(code_Array + i + 2) = *(code_Array + i);
        *(code_Array + i) = t;
    }//End for to switch numbers

}//End access_code


void decryption(int *code_Array)
{       
    int i = 0;
    int t = 0;
    int limit = CODESIZE;

    //limit set for switching numbers
    limit = limit/2; 

    //For to increment the numbers by 1
    for (i = 0; i < CODESIZE; i++)
    {
        *(code_Array+i) = *(code_Array+i) - 1;
        if (*(code_Array+i) == -1)
        {
            *(code_Array+i) = 9;
        }
    }//End for to increment by 1

    //For to switch the numbers in the array
    for (i = 0; i < limit; i++)
    {
        t = *(code_Array + i + 2);
        *(code_Array + i + 2) = *(code_Array + i);
        *(code_Array + i) = t;
    }//End for to switch numbers

}//End access_code