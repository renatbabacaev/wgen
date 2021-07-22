// Every string has maximum of 255 characters
#include <stdio.h>

// My headers
#include "own/colchar.h"        // Collecting characters from a string
#include "own/len.h"            // Getting String Lenght
#include "own/remchar.h"        // Removing same characters
#include "own/output.h"


char word[255], prefix[255];
int word_count, max_length;

int main()
{
    int i; 

    printf("User input: ");
    gets(word);

    printf("Minimum lenght: ");
    scanf("%i", &i); i--;

    printf("Maximum length: ");
    scanf("%i", &max_length);

    word_count = len(word);
    colchar(word_count, word);
    remchar(word_count, word);
    word_count = len(word);

    for(; i < max_length; i++)
    {
        output(0, i);
    }

    return 0;
}