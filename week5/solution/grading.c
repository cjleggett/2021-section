#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void print_int(int x);

int main(void)
{
    // Never use == true or == false
    int x = get_int("x: ");
    if (x < 0)
    {
        printf("Negative\n");
    }
    if (!(x < 0))
    {
        printf("Not negative\n");
    }

    // Don't overuse parentheses:
    int y = x + 2;
    int z = (y + 3) * 3;

    // Don't return if not necessary:
    print_int(z);

    // We can re-use i as long as we're not in the same loop:
    for (int i = 0; i < 5; i++)
    {
        print_int(i);
    }

    for (int i = 0; i < 5; i++)
    {
        print_int(i * 2);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            print_int(i * j);
        }
    }

    // Use style50!


    
}

void print_int(int x)
{
    printf("%i\n", x);
}