#include <stdio.h>

char word[255], prefix[255];
int word_count, max_length;

int output(int level, int plevel) {
    int i;

    if (level == plevel) {
        for(i = 0; i < word_count; i++) {
            printf("%s%c\n", prefix, word[i]);
        }
    }

    else {
        for(i = 0; i < word_count; i++) {
            prefix[level] = word[i];
            output(level + 1, plevel); 
        }
    }

    return 0;
}