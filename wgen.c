// Every string has maximum of 255 characters
#include <stdio.h>

// My headers
#include "own/colchar.h"        // Collecting characters from a string
#include "own/len.h"            // Getting String Lenght
#include "own/remchar.h"        // Removing same characters


char word[255], prefix[255];
int word_count, max_length;

int output(int level, int plevel)
{
    int i;

    if (level == plevel)
    {
        for(i = 0; i < word_count; i++)
        {
            printf("%s%c\n", prefix, word[i]);
        }
    }

    else
    {
        for(i = 0; i < word_count; i++)
        {
            prefix[level] = word[i];
            output(level + 1, plevel); 
        }
    }

    return 0;
}

int main()
{
    int i; 

    printf("User input: ");
    gets(word);

    printf("Maximum length: ");
    scanf("%i", &max_length);

    word_count = len(word);
    colchar(word_count, word);
    remchar(word_count, word);
    word_count = len(word);

    printf("Minimum lenght: ");
    scanf("%i", &i); i--;

    for(; i < max_length; i++)
    {
        output(0, i);
    }

    return 0;
}