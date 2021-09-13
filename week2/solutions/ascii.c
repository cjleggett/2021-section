#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

// program that takes in a character and outputs its ascii value OR takes in ascii value and outputs character

int main(void)
{
    // Get choice of path from user
    int choice = get_int("Type 1 for ascii to char and 2 for char to ascii: ");

    // Get integer and print out char
    if (choice == 1)
    {
        int ascii_val = get_int("Ascii Value: ");
        char c = (char) ascii_val;
        printf("%c\n", c);
    }

    // Get char and print out integer
    else if (choice == 2)
    {
        char c = get_char("Character: ");
        int ascii_val = (int) c;
        printf("%i\n", ascii_val);
    }

    // ALert user of error
    else
    {
        printf("Invalid input. Please try again.\n");
    }
}