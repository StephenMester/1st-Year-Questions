#include <stdio.h>
#include <string.h>

#define SIZE 10
#define SIZESENTANCE 100

int main()
{

    //Q1
    //Set SIZE to 10
    /*
    char *cities [SIZE] = {"Canberra", "Brussels", "Beijing", "Copernhagen", "London", "Paris", "Athens",
    "Dublin", "Edinburgh", "Cardiff"};

    char *countries [SIZE] = {"Australia", "Belgium", "China", "Denmark", "England", "France", "Greece",
    "Ireland", "Scotland", "Wales"};

    char user_choice [SIZE];

    int i;
    int same_check;

    scanf("%s", &user_choice);

    for ( i = 0; i < SIZE; i++)
    {
        same_check = strcmp(user_choice,countries[i]);

        if (same_check == 0)
        {
            printf("%s", cities[i]);
        }
    }
    */

   //Q2

    char user_sentance [SIZESENTANCE];
    char message [SIZESENTANCE] = {"My sentance is:"};
    int i;
    int counter = 0;
    fgets(user_sentance,SIZESENTANCE-16,stdin);

    for (i = 0; i < SIZESENTANCE; i++)
    {
        if (user_sentance[i] != '\0' && user_sentance[i] != '\n')
        {
            counter++;
            if (user_sentance[i] == ' ')
            {
                counter--;
            }
        }
        else
        {
            break;
        }
    }

    printf("There are %d characters in your sentance\n", counter);

    strcat(message,user_sentance);

    printf("%s", message);

    return 0;
}