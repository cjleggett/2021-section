#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

node* add_node(node*, int);
void print_nodes(node*);
void free_nodes(node*);

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x = get_int("Number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // TODO: Allocate a new node.
		// TODO: Add new node to head of linked list.
		list = add_node(list, x);
    }

	// TODO: Print all nodes.
	print_nodes(list);
	// TODO: Free all nodes.
	free_nodes(list);
}

// Adds a node with x at end of list THIS IS WHAT CHANGES FOR THIS PROBLEM
node* add_node(node *list, int x)
{
    if (list == NULL)
    {
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;
        return n;
    }
    list->next = add_node(list->next, x);
    return list;
}

// prints nodes in a list from first to last
void print_nodes(node *list)
{
    if (list == NULL)
    {
        return;
    }
    printf("%i\n", list->number);
    print_nodes(list->next);
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