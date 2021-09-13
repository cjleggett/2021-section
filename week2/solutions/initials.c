#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");

    // Keep track of whether to output next character
    bool output = true;

    // Loop over all characters in name
    for (int i = 0, len = strlen(name); i < len; i++)
    {
        // Check if we should output this character
        if (output == true)
        {
            printf("%c", toupper(name[i]));
            output = false;
        }

        // If we encounter a space, output the next character
        if (name[i] == ' ')
        {
            output = true;
        }
    }

    printf("\n");
}