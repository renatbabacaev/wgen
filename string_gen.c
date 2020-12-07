#include <stdio.h>


int main()
{
    char word[256], current_word;
    unsigned int word_count = 0, lenght, i, j, k;

    printf("Enter word/characters to generate posible variants: ");
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




    // Generating part
    printf("Enter the maximum length of last string: ");
    scanf("%i", &lenght);

/*  I'll use 1 for new string to apply the next formula:

    n - number of symbols extracted
    a - possible string combinations for 
    current number of characters

    a = n^2


    Second loop will use this formula 
    
    ⚠ USE GREATER/LESS OR EQUAL THAN ⚠ */

    for(i = 1; i <= lenght; i++)
    {
        for(j = 0; j <= (i ^ 2); j++)
        {
            printf("%c", new_symb[i]);
        }
        printf("\n");
    }




    return 0;
}