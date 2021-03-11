#include <stdio.h>
#include <string.h>



int main()
{

    //char array[100];
    
    //fgets(array,100,stdin);

    //printf("%s\n", array);

    
    /*
    //Q5
    char *text = "abcd";
    char *p = text;

    p += strlen(p)-1;

    while (text <= p)
    {
        puts(p--);
    }
    */

    //Q6
    char name[100];
    int lenght = 0;
    int i = 0;

    fgets(name,50,stdin);

    lenght = strlen(name);


    for (i = 0; i < lenght; i++)
    {
        printf("%c ", name[i]);
    }


    return 0;
}
