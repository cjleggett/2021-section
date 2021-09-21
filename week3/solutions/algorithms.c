#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ALENGTH 5

void printarr(int[]);
int factorial(int);
int fibonacci(int);
void bubble(int[]);
void selection(int[]);
bool pal(char[]);

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
    // printf("pal(%s) = ", name);
    // printf("%s\n", pal(name) ? "true" : "false");
    // printf("pal(%s) = ", word);
    // printf("%s\n", pal(word) ? "true" : "false");
}

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

// function to take in n and return n!
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// function to take in n and return the nth fibonacci number
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function implementing bubble sort
void bubble(int values[])
{
    // Repeat process n times
    for (int i = 0; i < ALENGTH - 1; i++)
    {
        bool swapped = false;
        // Compare elements up to the last one already in place
        for (int j = 0; j < ALENGTH - 1 - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
                swapped = true;
            }
        }
        // If we didn't swap elements, we're done!
        if (!swapped)
        {
            return;
        }
    }
}


// Function implementing selection sort
void selection(int values[])
{
    for (int i = 0; i < ALENGTH - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < ALENGTH; j++)
        {
            if (values[j] < values[min_index])
            {
                min_index = j;
            }
        }
        int temp = values[i];
        values[i] = values[min_index];
        values[min_index] = temp;
    }
}

bool pal(char str[])
{
    int length = strlen(str);

    // strings of length 1 and zero are definitely palindromes (base case)
    if (length == 1 || length == 0)
    {
        return true;
    }

    // otherwise, we can compare the first and last letter, and return false if they're different
    if (str[0] != str[length - 1])
    {
        return false;
    }

    // If the first and last are the same, we can eliminate them, and check if what remains is a palindrome:
    char new_string[length - 1];
    for (int i = 0; i < length - 2; i ++)
    {
        new_string[i] = str[i + 1];
    }
    new_string[length - 2] = '\0';

    return pal(new_string);
}