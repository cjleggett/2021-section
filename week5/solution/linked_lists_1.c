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

		/* Alternatively, we could have done this without a function:
		// Allocate a new node
		node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;

        // Add node to head of linked list:
        n->next = list;
        list = n;
        */
    }

	// TODO: Print all nodes.
	print_nodes(list);
	// TODO: Free all nodes.
	free_nodes(list);

	/* Alternatively, you could have done this without recursion:

	// Print all nodes:
	for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // Free all nodes:
    node *ptr = list;
    while (ptr != NULL)
    {
        node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
    */

}

// Adds a node with x at beginning of list
node* add_node(node *list, int x)
{
    node *n = malloc(sizeof(node));
    n->number = x;
    n->next = list;
	return n;
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