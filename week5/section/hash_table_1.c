#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

node *HASH_TABLE[2] = {NULL, NULL};

int main(void)
{
    int elts = get_int("How many elements will be stored: ");
    for (int i = 0; i < elts; i++)
    {
        int x = get_int("Add number: ");

        // TODO: Hash number and decide if it should go in the odd or even space

        // TODO: Allocate a new node.
        // TODO: Add new node to head of linked list.
    }

    while (true)
    {
        int x = get_int("\nSearch for number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // TODO: Search for number in our hash table. If it's there, print FOUND
        // otherwise, print NOT FOUND

    }

	// TODO: Free all nodes.

}