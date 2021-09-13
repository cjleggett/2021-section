#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./addition x y\n");
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("%i + %i = %i\n", x, y, x + y);

}