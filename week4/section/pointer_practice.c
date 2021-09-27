#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int*, int*);
char* concat(char*, char*);
int* append(int*, int, int*);
void printls(int*, int);

int main(void)
{
    // Uncomment to test swap
    // int a = get_int("Integer 1: ");
    // int b = get_int("Integer 2: ");
    // swap(&a, &b);
    // printf("Integer 1: %i\nInteger 2: %i\n", a, b);



    // Uncomment to test concat
    // Then make sure that there are no memory leaks, and fix any that you find.
    // char *c = get_string("String 1: ");
    // char *d = get_string("String 2: ");
    // char *cd = concat(c, d);
    // printf("%s + %s = %s\n", c, d, cd);



    // CHALLENGE: Uncomment to test append
    // Then make sure that there are no memory leaks, and fix any that you find.
    // Initiallly, the list has length 1:
    // int length = 1;
    // int *ls = malloc(length * sizeof(int));
    // ls[0] = 5;

    // while (true)
    // {
    //     int new_int = get_int("Type a non-negative number to add. When you're done, type a negative number: ");
    //     if (new_int < 0)
    //     {
    //         break;
    //     }
    //     int *new_ls = append(ls, new_int, &length);
    //     ls = malloc(length * sizeof(int));
    //     // copying over the new array
    //     for (int i = 0; i < length; i ++)
    //     {
    //         ls[i] = new_ls[i];
    //     }
    //     printls(ls, length);
    // }

}

// Swaps the values of two integer pointers
void swap(int *a, int *b)
{
    return;
}

// Concatenates two strings
char* concat(char *c, char *d)
{
    return "TODO";
}


// Adds an integer to the end of a list of integers
int* append(int *ls, int next, int *current_length)
{
    return NULL;
}

// Prints a list of integers
void printls(int* nums, int length)
{
    printf("[");
    for (int i = 0; i < length; i ++)
    {
        printf("%i", nums[i]);
        if (i != length - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}