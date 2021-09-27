// Detect if a file is a GIF

#include <stdbool.h>
#include <stdio.h>

const char signature[6] = {'G', 'I', 'F', '8', '9', 'a'};


int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        printf("Usage: ./gif_detector filename\n");
        return 1;
    }

    // Open file
    FILE *f = fopen(argv[1], "r");
    if (!f)
    {
        printf("Could not read file.\n");
        return 1;
    }

    // TODO

}