#include <stdio.h>

#include "integers.h"

void print(node *n);

int main(void)
{
    // To test your code, you may call any functions from integers.c here.
    // This file (testing.c) wil not be graded.
}

void print(node *n)
{
    if (n != NULL)
    {
        print(n->next);
        printf("%i", n->digit);
    }
}
