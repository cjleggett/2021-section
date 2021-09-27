#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void capitalize(FILE *infile, FILE *outfile);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./capitalize infile outfile\n");
        return 1;
    }
    FILE *infile = fopen(argv[1], "r");
    FILE *outfile = fopen(argv[2], "w");

    // Copy file:
    capitalize(infile, outfile);


    fclose(infile);
    fclose(outfile);
}

void capitalize(FILE *infile, FILE *outfile)
{
    while (true)
    {
        char c = fgetc(infile);
        if (c == EOF)
        {
            return;
        }
        fputc(toupper(c), outfile);
    }
}