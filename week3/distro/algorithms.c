#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ALENGTH 5

void printarr(int[]);

int main(void)
{
    // Uncomment to test the factorial function:
    // printf("factorial(%i) = %i\n", 0, factorial(0));
    // printf("factorial(%i) = %i\n", 1, factorial(1));
    // printf("factorial(%i) = %i\n", 5, factorial(5));
    // printf("factorial(%i) = %i\n", 10, factorial(10));

    // Uncomment to test the fibonacci function:
    // printf("fibonacci(%i) = %i\n", 0, fibonacci(0));
    // printf("fibonacci(%i) = %i\n", 1, fibonacci(1));
    // printf("fibonacci(%i) = %i\n", 3, fibonacci(3));
    // printf("fibonacci(%i) = %i\n", 8, fibonacci(8));

    // Uncomment to test the bubble sort:
    // int a1[] = {2, 4, 65, 12, 4};
    // int a2[] = {1, 4, -3, 0, 0};
    // printf("bubble(");
    // printarr(a1);
    // bubble(a1);
    // printf(") = ");
    // printarr(a1);
    // printf("\n");
    // printf("bubble(");
    // printarr(a2);
    // bubble(a2);
    // printf(") = ");
    // printarr(a2);
    // printf("\n");

    // Uncomment to test the selection sort:
    // int a3[] = {2, 4, 65, 12, 4};
    // int a4[] = {1, 4, -3, 0, 0};
    // printf("selection(");
    // printarr(a3);
    // selection(a3);
    // printf(") = ");
    // printarr(a3);
    // printf("\n");
    // printf("selection(");
    // printarr(a4);
    // selection(a4);
    // printf(") = ");
    // printarr(a4);
    // printf("\n");

    // Uncomment to test the palindrome function:
    // char name[7] = "Connor";
    // char word[8] = "racecar";
    // printf("pal(%s) = %b", name, pal(name));
    // printf("pal(%s) = %b", word, pal(word));

}

// Prints an array
void printarr(int array[])
{
    printf("[");
    for (int i = 0; i < ALENGTH; i ++)
    {
        printf("%i", array[i]);
        if (i != ALENGTH - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}