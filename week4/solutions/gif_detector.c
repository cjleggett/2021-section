// Detect if a file is a GIF

#include <stdbool.h>
#include <stdio.h>

const char signature[6] = {'G', 'I', 'F', '8', '9', 'a'};

bool is_gif(FILE *f);

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        printf("Usage: ./gif0 filename\n");
        return 1;
    }

    // Open file
    FILE *f = fopen(argv[1], "r");
    if (!f)
    {
        printf("Could not read file.\n");
        return 1;
    }

    // Check for GIF signature
    if (is_gif(f))
    {
        printf("GIF\n");
    }
    else
    {
        printf("NOT GIF\n");
    }

    // Close file
    fclose(f);
}

bool is_gif(FILE *f)
{
    // Read bytes in to buffer
    unsigned char buffer[6];
    int bytes = fread(buffer, 1, 6, f);

    // Check number of bytes read
    if (bytes != 6)
    {
        return false;
    }

    // Check each byte
    for (int i = 0; i < 6; i++)
    {
        if (buffer[i] != signature[i])
        {
            return false;
        }
    }

    return true;
}