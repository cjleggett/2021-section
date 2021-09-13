#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define ALPHASIZE 26

int main(void)
{
    string s1 = get_string("Word 1: ");
    string s2 = get_string("Word 2: ");

    if (!strcasecmp(s1, s2))
    {
        printf("EXACT MATCH\n");
        return 0;
    }

    int characters[ALPHASIZE] = {0};

    for (int i = 0, len = strlen(s1); i < len; i++)
    {
        if (isalpha(s1[i]))
        {
            characters[tolower(s1[i]) - 'a']++;
        }
        else
        {
            printf("Alphabetic characters only.");
            return 1;
        }
    }

    for (int i = 0, len = strlen(s2); i < len; i++)
    {
        if (isalpha(s2[i]))
        {
            characters[tolower(s2[i]) - 'a']--;
        }
        else
        {
            printf("Alphabetic characters only.");
            return 1;
        }
    }

    for (int i = 0; i < ALPHASIZE; i++)
    {
        if (characters[i])
        {
            printf("NOT ANAGRAM\n");
            return 0;
        }
    }

    printf("ANAGRAM\n");
}