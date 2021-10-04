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

node* add_node(node*, int);
void free_nodes(node*);
bool search_list(node*, int);
int hash(int);

int main(void)
{
    int elts = get_int("How many elements will be stored: ");
    for (int i = 0; i < elts; i++)
    {
        int x = get_int("Add number: ");

        // TODO: Hash number and decide if it should go in the odd or even space
        int hashed = hash(x);

        // TODO: Allocate a new node.
        // TODO: Add new node to head of linked list.
        HASH_TABLE[hashed] = add_node(HASH_TABLE[hashed], x);
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
        int hashed = hash(x);
        if (search_list(HASH_TABLE[hashed], x))
        {
            printf("FOUND\n");
        }
        else
        {
            printf("NOT FOUND\n");
        }

    }

	// TODO: Free all nodes.
    free_nodes(HASH_TABLE[0]);
    free_nodes(HASH_TABLE[1]);

}

// Adds a node with x at beginning of list
node* add_node(node *list, int x)
{
    node *n = malloc(sizeof(node));
    n->number = x;
    n->next = list;
	return n;
}

// Frees nodes of a linked list
void free_nodes(node *list)
{
    if (list == NULL)
    {
        return;
    }
    free_nodes(list->next);
    free(list);
}

// Searches through linked list for value
bool search_list(node *list, int x)
{
    if (list == NULL)
    {
        return false;
    }
    if (list->number == x)
    {
        return true;
    }
    return search_list(list->next, x);
}

int hash(int x)
{
    return x % 2;
}