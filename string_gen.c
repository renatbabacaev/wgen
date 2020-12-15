// Every string has maximum of 256 characters

#include <stdio.h>

// My headers
#include "own/colchar.h"        // Collecting characters from a string
#include "own/len.h"            // Getting String Lenght
#include "own/remchar.h"        // Removing same characters
#include "own/swap.h"           // Giving string's characters to another string



int main()
{
    char word[256];
    int i, j, k, max_length, word_count;
    
    scanf("%s", &word);

    word_count = len(word);
    
    colchar(word_count, word);
    k = remchar(word_count, word);

    k--;
    char charlist[k];
    swap(word, charlist, k);


    return 0;
}