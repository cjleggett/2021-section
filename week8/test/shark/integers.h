#include <stdbool.h>
#include <stdlib.h>

typedef struct node
{
    int digit;
    struct node *next;
}
node;

bool divisible_by_three(node *n);

bool equal(node *a, node *b);

void increment(node *n);
