// Every string has maximum of 256 characters

#include <stdio.h>

// My headers
#include "own/colchar.h"        // Collecting characters from a string
#include "own/len.h"            // Getting String Lenght
#include "own/remchar.h"        // Removing same characters



int main()
{
    char word[256];
    int i, j, k, max_length, word_count;

    scanf("%s", &word);



    word_count = len(word);
    colchar(word_count, word);
    remchar(word_count, word);
    word_count = len(word);



    return 0;
}