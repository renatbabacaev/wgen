#include <stdio.h>


int main()
{
    char word[256], current_word;
    int word_count = 0, i, j, k;

    scanf("%s", word);



    // Creating a 'clear' string
    while(word[word_count] != '\0')
    {
        word_count++;
    }

    char symb[word_count];

    for(i = 0; i < word_count; i++)
    {
        symb[i] = word[i];
    }



    // Extracting symbols
    // Step 1: Sorting chars using bubble sort
    for(j = 0; j < word_count - 1; j++)
    {
        for(i = 0; i < word_count - 1; i++)
        {
            if(symb[i] > symb[i + 1])
            {
                current_word = symb[i];
                symb[i] = symb[i + 1];
                symb[i + 1] = current_word;
            }
        }
    }
    
     

    // Step 2: Eliminating same characters
    for(i = 0; i < word_count; i++)
    {
        for(j = i + 1; j < word_count; )
        {
            if(symb[j] == symb[i])
            {
                for(k = j; k < word_count; k++)
                {
                    symb[k] = symb[k + 1];
                }
                word_count--;
            }
            else
            {
                j++;
            }
        }
    }
    // Cleaning using loop that is located after initializations
    word_count = 0;
    while(symb[word_count] != '\0')
    {
        word_count++;
    }

    char new_symb[word_count];

    for(i = 0; i < word_count; i++) // Ready for use characters
    {
        new_symb[i] = symb[i];
    }


    return 0;
}